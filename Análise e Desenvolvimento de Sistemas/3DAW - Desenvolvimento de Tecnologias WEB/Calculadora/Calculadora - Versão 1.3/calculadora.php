<?php

include("calculadora.html");

	$a = $_POST['num1'];
	$b = $_POST['num2'];
	$op = $_POST['operacao'];
	
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
	
		if(empty($a) || empty($b) || !is_numeric($a) || !is_numeric($b)){
		
			echo "Erro! Preencha os campos corretamente!";
		
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