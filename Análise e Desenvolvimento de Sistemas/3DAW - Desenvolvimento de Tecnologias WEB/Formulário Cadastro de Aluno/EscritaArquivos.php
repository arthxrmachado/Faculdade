<?php

	echo "Leitura de Arquivos";
	
	echo "<br><br>";
	
	//echo readfile(filename: "alunosImp.csv");
	
	$arquivoSaida = fopen ("alunosNovosExp.csv", mode "w") or die ("Não foi possível abrir o arquivo desejado.");

	$linhaArquivo = "nome; email; matricula\n";
	
	fwrite($arquivoSaida, $linhaArquivo);
	
	$linhaArquivo = "Arthur Machado; arthurmachado780@gmail.com; 1920478300009";

	fwrite($arquivoSaida, $linhaArquivo);
	
	fclose($arquivoSaida);

?>