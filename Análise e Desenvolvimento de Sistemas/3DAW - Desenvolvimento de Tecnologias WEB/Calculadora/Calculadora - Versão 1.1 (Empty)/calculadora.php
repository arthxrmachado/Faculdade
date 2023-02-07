<?php

include("calculadora.html");

	$a = $_POST['num1'];
	$b = $_POST['num2'];
	$op= $_POST['operacao'];
	
		if(empty($a) || empty($b)){
		
			echo "Erro! Preencha os campos vazios!";
		
		}

		elseif($op == '+'){
			
			$c = $a + $b;
			
			echo "Resultado: $c";
			
		}
			
		elseif($op == '-'){
			
			$c = $a - $b;
			
			echo "Resultado: $c";
			
		}
			
		elseif($op == '*'){
			
			$c = $a*$b;
			
			echo "Resultado: $c";
			
		}
		
		elseif($op == '/'){
			
			$c = $a/$b;

			echo "Resultado: $c";
			
		}

?>