
This repository is based on the official proxmark3 repository (https://github.com/Proxmark/proxmark3) 
which has the following changes:
1. In 'iclass.c'
 	1.1 'GetIClassCommandFromReader' works with the functions 'uart_init', 'uart_samples', 'uart_bit' 
		from Iceman repository (https://github.com/iceman1001/proxmark3) which, in turn, are slightly optimized.
 	1.2 Slightly optimized functions 'CodeIClassTagAnswer', 'encode4Bits',  'SendIClassAnswer'.
	1.3 In several functions, the ability to work with multi-pages tags has been added.
	1.4 In the 'doIClassSimulation' added the ability to work with the Credit Key.
2. In several commands of 'cmdhficlass.c', the ability to work with multi-pages tags has been added.
3. Changes have been added to several modules to enable the fixes listed above to work.