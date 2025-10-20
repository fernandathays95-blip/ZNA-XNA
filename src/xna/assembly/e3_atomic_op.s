// Código AS (Assembly) para a Operação Atômica da Célula E3
// Arquivo: src/xna/celulas/e3/e3_atomic_op.s

; ----------------------------------------------------------------------
; e3_atomic_construir: A menor ação de construção 3D (E, 3).
; Executa um único movimento ou ligação molecular.
; ----------------------------------------------------------------------

.global e3_atomic_construir

e3_atomic_construir:
    ; A convenção de chamada assume que o target_address (uint64_t) está no registrador R0.

    ; 1. Lógica de Ativação da Nanomáquina E3:
    ;   Instrução de baixo nível para ativar o motor molecular 3D.
    CALL E3_ACTIVATE_MOTOR  ; Manda sinal para o hardware do andaime ZNA

    ; 2. Colocação de Material (E):
    ;   A iteração (E) de Estrutura: coloca o nano-pedaço.
    MOV R1, [R0]            ; Carrega o dado do endereço de destino
    STORE R1, E3_NANOGRABBER ; Envia para o braço robótico molecular

    ; 3. Confirmação 3D (3):
    ;   A iteração (3) de 3D: Confirma que a colocação foi precisa no eixo Z.
    JUMP E3_CHECK_Z_AXIS    ; Verifica sensores de profundidade nanométrica

    ; 4. Limpeza e Retorno:
    CALL E3_DEACTIVATE_MOTOR ; Desativa o motor molecular.
    RET 
