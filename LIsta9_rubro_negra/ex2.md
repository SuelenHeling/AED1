A arvore inicial, apos inserir 40, 20, 60, 10, 30, 50, 70, fica assim:
 
         40(P)
       /       \
    20(P)      60(P)
    /   \      /   \
 10(R) 30(R) 50(R) 70(R)

===================================================================================================================================================================

a- Inserir 5, 15, 3

Insercao de 5:

O no 5 e inserido a esquerda de 10. Como 10 e vermelho e o tio 30 tambem e vermelho, aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(R)      60(P)
     /   \      /   \
  10(P) 30(P) 50(R) 70(R)
  /
 5(R)


 Insercao de 15:

 O no 15 e inserido a direita de 10. Como 10 e preto, nao ha correcao.

          40(P)
        /       \
     20(R)      60(P)
     /   \      /   \
  10(P) 30(P) 50(R) 70(R)
  / \
 5(R)15(R)

 Insercao de 3:

 O no 3 e inserido a esquerda de 5. O pai 5 e vermelho e o tio 15 tambem e vermelho. Aplica-se o caso 1: recoloracao.

         40(P)
        /       \
     20(R)      60(P)
     /   \      /   \
  10(R) 30(P) 50(R) 70(R)
  / \
 5(P)15(P)
 /
3(R)

A correcao sobe de 5 para 10 e, depois, para 20. Como 20 tem pai preto (40), a correcao termina.

Resposta: a correcao subiu pela arvore na insercao de 3. O caso que terminou a correcao foi o caso 1, com recoloracao.

===================================================================================================================================================================


b- Inserir 25, 35, 33

Insercao de 25:

O no 25 e inserido a esquerda de 30. Como 30 e preto, nao ha correcao.

          40(P)
        /       \
     20(P)      60(P)
     /   \      /   \
  10(R) 30(R) 50(R) 70(R)
        /
      25(R)

Insercao de 35:

O o 35 e inserido a direita de 30. Como o pai 30 e vermelho e o tio 10 tambem e vermelho, aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(R)      60(P)
     /   \      /   \
  10(P) 30(P) 50(R) 70(R)
        / \
      25(R)35(R)

Insercao de 33:

O no 33 e inserido a esquerda de 35. O pai 35 e vermelho e o tio 25 e vermelho. Aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(R)      60(P)===================================================================================================================================================================
     /   \      /   \
  10(P) 30(R) 50(R) 70(R)
        / \
      25(P)35(P)
            /
          33(R)

A correcao sobe de 35 para 30 e depois para 20. Como 20 tem pai preto (40), a correcao termina.

Resposta: a correcao subiu pela arvore na insercao de 33. O caso que terminou a correcao foi o caso 1, com recoloracao.

===================================================================================================================================================================

c- Inserir 80, 90, 85

Insercao de 80:

O no 80 e inserido a direita de 70. Como 70 e vermelho e o tio 50 tambem e vermelho, aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(P)      60(R)
     /   \      /   \
  10(R) 30(R) 50(P) 70(P)
                            \
                            80(R)

Insercao de 90:

O no 90 e inserido a direita de 80. O pai 80 e vermelho e o tio e preto. Como o no esta em linha reta, aplica-se o caso 3 espelhado: recoloracao e rotacao a esquerda em 70.

          40(P)
        /       \
     20(P)      60(R)
     /   \      /   \
  10(R) 30(R) 50(P) 80(P)
                     / \
                  70(R)90(R)

Insercao de 85:

O no 85 e inserido a esquerda de 90. O pai 90 e vermelho e o tio 70 tambem e vermelho. Aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(P)      60(R)
     /   \      /   \
  10(R) 30(R) 50(P) 80(R)
                     / \
                  70(P)90(P)
                       /
                     85(R)===================================================================================================================================================================

A correcao sobe de 90 para 80 e depois para 60. Como 60 tem pai preto (40), a correcao termina.

Resposta: a correcao subiu pela arvore na insercao de 85. O caso que terminou a correcao foi o caso 1, com recoloracao.

===================================================================================================================================================================

d- Inserir 45, 55, 52

Insercao de 45:

O no 45 e inserido a esquerda de 50. Como 50 e vermelho e o tio 70 tambem e vermelho, aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(P)      60(R)
     /   \      /   \
  10(R) 30(R) 50(P) 70(P)
             /
           45(R)

Insercao de 55:

O no 55 e inserido a direita de 50. Como 50 e preto, nao ha correcao.

          40(P)
        /       \
     20(P)      60(R)
     /   \      /   \
  10(R) 30(R) 50(P) 70(P)
             / \
          45(R)55(R)

Insercao de 52:

O no 52 e inserido a esquerda de 55. Como 55 e vermelho e o tio 45 tambam a vermelho, aplica-se o caso 1: recoloracao.

          40(P)
        /       \
     20(P)      60(R)
     /   \      /   \
  10(R) 30(R) 50(R) 70(P)
             / \
          45(P)55(P)
                /
              52(R)

A correcao sobe de 55 para 50 e depois para 60. Como 60 tem pai preto (40), a correcao termina.

Resposta: a correcao subiu pela arvore na insercao de 52. O caso que terminou a correcao foi o caso 1, com recoloracao.
