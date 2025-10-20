// Código CL (C) para a Interface do Driver SD Card
// Arquivo: src/xna/sdcard/sdcard.h

#ifndef SDCARD_H
#define SDCARD_H

#include <stdint.h>
#include <stddef.h>

// Códigos de erro da operação SD
typedef enum {
    SD_OK = 0,
    SD_ERRO_COMUNICACAO,
    SD_ERRO_TIMEOUT,
    SD_ERRO_DADOS
} sd_status_t;

/**
 * @brief Inicializa a comunicação molecular com o módulo SD Card.
 * @return SD_OK em sucesso, ou um código de erro.
 */
sd_status_t sdcard_iniciar(void);

/**
 * @brief Lê um bloco de dados do cartão SD e o transfere para o endereço ZNA.
 * @param endereco_bloco O número do bloco (LBA) a ser lido no SD Card.
 * @param endereco_destino_zna O endereço de memória molecular ZNA para onde ler.
 * @return SD_OK em sucesso.
 */
sd_status_t sdcard_ler_bloco(uint32_t endereco_bloco, uint64_t endereco_destino_zna);

/**
 * @brief Escreve um bloco de dados de um endereço ZNA para o cartão SD.
 * @param endereco_bloco O número do bloco (LBA) a ser escrito no SD Card.
 * @param endereco_origem_zna O endereço de memória molecular ZNA de onde escrever.
 * @return SD_OK em sucesso.
 */
sd_status_t sdcard_escrever_bloco(uint32_t endereco_bloco, uint64_t endereco_origem_zna);

#endif // SDCARD_H
