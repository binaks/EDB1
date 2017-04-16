clear
reset
set key off

set title "Análise Empírica de Algoritmos - Busca Sequencial Iterativa"

set autoscale

set xlabel "tamanho da base de busca"
set ylabel "tempo de execução (em segundos)"

set xtic auto
set ytic 0.000001

set yrange [0:0.00001]

set terminal png size 800,600 enhanced font "Helvetica 12"
set output "graph4.png"

set style textbox transparent margins 1.0, 1.0 border

set key bmargin left horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid

plot "../data/sequencialI.dat" using 1:2 title 'Tempo médio' with line , \
        "../data/sequencialIM.dat" using 1:2 title 'Melhor tempo' with line , \
        "../data/sequencialIm.dat" using 1:2 title 'Pior tempo' with line
