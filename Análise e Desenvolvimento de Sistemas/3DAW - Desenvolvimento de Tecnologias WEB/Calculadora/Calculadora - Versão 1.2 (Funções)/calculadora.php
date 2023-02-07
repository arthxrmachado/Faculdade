<?php

include("calculadora.html");

	$a = $_POST['num1'];
	$b = $_POST['num2'];
	$op = $_POST['operacao'];
	
		if($a != "" and ctype_digit($a)) || ($b != "" and ctype_digit($b){
			
			$aValido == 1;
			$bValido == 1;
			
		}
	
		function soma (int $a, int $b){
		
			return $a + $b;
		
		}
		
		function sub (int $a, int $b){
		
			return $a - $b;
		
		}
		
		function mult (int $a, int $b){
		
			return $a * $b;
		
		}
		
		function div (int $a, int $b){
		
			return $a / $b;
		
		}
	
		if(empty($a) || empty($b)){
		
			echo "Erro! Preencha os campos vazios!";
		
		}
		
		if($aValido == 1)|| ($bValido == 1){
		
			echo "Erro! Preencha os campos com númers válidos!";
		
		}

		elseif($op == '+'){
			
			echo "$a + $b = " . soma($a, $b);
			
		}
			
		elseif($op == '-'){
			
			echo "$a + $b = " . sub($a, $b);
			
		}
			
		elseif($op == '*'){
			
			echo "$a + $b = " . mult($a, $b);
			
		}
		
		elseif($op == '/'){
			
			echo "$a + $b = " . div($a, $b);
			
		}

?>