<?php

	echo "Leitura de Arquivos";
	
	echo "<br><br>";
	
	//echo readfile(filename: "alunosImp.csv");
	
	$arquivo = fopen (filename: "alunosImp.csv" , mode "r") or die ("Não foi possível abrir o arquivo desejado.");

	echo fread ($arquivo , length: filesize (filename: "alunoImp.csv"));
	
	fclose($arquivo);

?>