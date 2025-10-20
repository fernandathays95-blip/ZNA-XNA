// Código AS (Assembly) para a interface com a Célula E3
// Arquivo: src/xna/assembly/e3_interface.s

; Definição da função para a Célula E3
.global comando_reconstruir

comando_reconstruir:
    ; Recebe o endereço da mutação a ser corrigida no registrador R0
    
    ; 1. Lógica para calcular as 999 iterações da Célula E3 (E, 3)
    MOV R1, #999       ; Contador de 999 (E, 3)
    MOV R2, #0         ; Iteração atual
    
loop_e3:
    CMP R2, R1
    BGE end_reconstrucao  ; Sai do loop quando atingir 999
    
    ; 2. Comando físico de montagem nanoscópica
    CALL E3_CONSTRUIR_3D  ; Chama o hardware da Célula E3
    
    ADD R2, R2, #1        ; Incrementa o contador
    B loop_e3

end_reconstrucao:
    RET
