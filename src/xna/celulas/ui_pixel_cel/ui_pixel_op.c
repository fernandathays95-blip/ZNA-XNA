// Código CL (C) para o Driver de Pixel UI (Lógica de Mapeamento)
// Arquivo: src/xna/celulas/ui_pixel_cel/ui_pixel_op.c

#include "ui_pixel_op.h"

// Dimensões do painel de saída molecular (Exemplo de 1024x1024 pixels)
#define UI_WIDTH  1024
#define UI_HEIGHT 1024
#define UI_BASE_ADDRESS 0x4000000000000000ULL // Endereço de memória ZNA reservado para UI

/**
 * Define o estado de um pixel molecular na interface.
 * Mapeia as coordenadas (x, y) para um endereço molecular único no ZNA.
 */
void ui_pixel_definir_estado(int x, int y, uint8_t estado) {
    if (x < 0 || x >= UI_WIDTH || y < 0 || y >= UI_HEIGHT) {
        // Pixel fora dos limites
        return;
    }

    // Calcula o endereço linear do pixel (x + y * largura)
    uint64_t offset = (uint64_t)x + (uint64_t)y * UI_WIDTH;
    uint64_t endereco_molecular = UI_BASE_ADDRESS + offset;

    // Chama a função de manipulação de baixo nível (Assembly)
    ui_pixel_manipular_low(endereco_molecular, estado);
}

// Exemplo de uso pela Célula H:
// void sinalizar_reparo(int x, int y) {
//     ui_pixel_definir_estado(x, y, PIXEL_ESTADO_REPARO);
// }
