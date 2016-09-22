Exercício 1 (e único dessa vez)
===============================
Bom dia =]

Esse exemplo é um exemplo de projeto com arquitetura de diretórios usável, que
pode ser encontrada por aí: uma pasta com os .h (_include_) e uma pasta com as
implementações (_src_), divididas em módulos, cada um em sua pasta.

Faça um make recursivo de modo que todas as saídas sejam destinada
a uma pasta diferente da dos arquivos-fonte, diga-se a pasta _build_.

Deve haver pelo menos um _Makefile_ na raiz e um na pasta _src_.

Dicas:
------
- Crie a pasta usando `mkdir -p build`, que não reclama se a pasta já existir
- Exporte variáveis, como feito em __6-subMakes__
