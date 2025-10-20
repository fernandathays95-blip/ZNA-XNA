// Código CL (C) para o Driver de Controle da Célula E3
// Arquivo: src/xna/celulas/e3/e3_driver.h

#ifndef E3_DRIVER_H
#define E3_DRIVER_H

#include <stdint.h>

/**
 * @brief Implementação de baixo nível da iteração 999 (E, 3).
 * Esta é a operação mais fundamental, implementada em Assembly (AS).
 */
extern void e3_atomic_construir(uint64_t target_address);

/**
 * @brief Inicia uma micro-construção 3D da estrutura ZNA.
 * O driver que coordena as 999 chamadas para a função atomic_construir.
 * * @param target_address O endereço molecular onde a micro-construção deve começar.
 */
void e3_iniciar_micro_construcao(uint64_t target_address);

#endif // E3_DRIVER_H
