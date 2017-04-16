clear
reset
set key off

set title "Análise Empírica de Algoritmos - Busca Sequencial Recursiva"

set autoscale

set xlabel "tamanho da base de busca"
set ylabel "tempo de execução (em segundos)"

set xtic auto
set ytic 0.0000001

set yrange [0:0.0000005]

set terminal png size 800,600 enhanced font "Helvetica 12"
set output "graph3.png"

set style textbox transparent margins 1.0, 1.0 border

set key bmargin left horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid

plot "../data/sequencialR.dat" using 1:2 title 'Tempo médio' with line , \
        "../data/sequencialRM.dat" using 1:2 title 'Melhor tempo' with line , \
        "../data/sequencialRm.dat" using 1:2 title 'Pior tempo' with line
