// Código CL (C) para a Interface da Célula de Pixel UI
// Arquivo: src/xna/celulas/ui_pixel_cel/ui_pixel_op.h

#ifndef UI_PIXEL_OP_H
#define UI_PIXEL_OP_H

#include <stdint.h>

// Definições de estados do "pixel" molecular (simulando cor/estado)
#define PIXEL_ESTADO_OFF 0x00
#define PIXEL_ESTADO_ON  0x01
#define PIXEL_ESTADO_REPARO 0x02  // Sinal de que a Célula H está ativa

/**
 * @brief Implementação de baixo nível da manipulação de pixel.
 * Esta função é implementada em Assembly (AS) para acesso direto ao hardware de saída.
 *
 * @param endereco_molecular O endereço ZNA do pixel no array de saída.
 * @param novo_estado O valor do novo estado (cor/sinal) do pixel.
 */
extern void ui_pixel_manipular_low(uint64_t endereco_molecular, uint8_t novo_estado);

/**
 * @brief Define o estado de um pixel molecular na interface de saída.
 * O driver de alto nível que a lógica XNA usa para desenhar informações.
 *
 * @param x Coordenada X do pixel.
 * @param y Coordenada Y do pixel.
 * @param estado O estado a ser definido (OFF, ON, REPARO, etc.).
 */
void ui_pixel_definir_estado(int x, int y, uint8_t estado);

#endif // UI_PIXEL_OP_H
