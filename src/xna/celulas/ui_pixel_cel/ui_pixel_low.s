// Código AS (Assembly) para Manipulação de Pixel (Baixo Nível)
// Arquivo: src/xna/celulas/ui_pixel_cel/ui_pixel_low.s

; ----------------------------------------------------------------------
; ui_pixel_manipular_low: Acesso direto ao hardware de saída (Pixel Molecular).
; ----------------------------------------------------------------------

.global ui_pixel_manipular_low

ui_pixel_manipular_low:
    ; Convenção de chamada:
    ; R0 contém endereco_molecular (uint64_t)
    ; R1 contém novo_estado (uint8_t)

    ; 1. Lógica de Escrita no Endereço ZNA:
    ;    Move o novo estado (cor/sinal) para a posição de memória molecular ZNA.
    STORE R1, [R0] ; Escreve o novo estado no endereço do pixel ZNA
    
    ; 2. Sincronização e Saída (Ativação do Pixel):
    ;    Manda um pulso para o transdutor molecular que renderiza o pixel.
    CALL UI_SYNC_PULSE  ; Sinaliza o hardware para atualizar o estado físico do pixel

    RET
