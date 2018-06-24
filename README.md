UNIVERSIDADE FEDERAL DE SÃO CARLOS

TRABALHO 2 – LISTA - ESTRUTURA DE DADOS

    JOÃO AUGUSTO LEITE 743551
    
    THAIS OYAMADA TANAKA 743597
    
    VINICIUS HENRIQUE DOS SANTOS CARVALHO 743602
    
    VINICIUS PANSARIM 743603
    
O JOGO

	O jogo feito nesse trabalho representa uma compra no mercado. Nele, um garoto fará a compra de acordo com a lista de sua mãe. Mas, como ele a perde, terá de lembrar de todos os itens. O jogador será o garoto e, caso ele erre algum objeto da lista, receberá uma mensagem diferente da que ele receberia se acertasse todos os objetos da lista de compras de sua mãe.
	
	Para executar o jogo no Code Blocks e no Dev C++, é necessário configurar o compilador para C++11.
	
	Para linux:
 		g++ *.c *.h -o jogo
		./jogo
		
	Para configuar para funcionar no CodeBlocks, é necessário ir em:
		Criar um novo projeto: File -> New -> Project... -> Console application -> Go -> C++
		Após escolher o nome do projeto pressione Next -> Finish
		Remova o arquivo já existente no projento clicando em Soucers -> botão direito no main.cpp -> Remove file from project
		Após isso clique com o botão direito no seu projeto e Add Files -> e selecione todos os arquivos .cpp e .h enviados
		Após isso é necessário configurar a flag c++11. Para isso, é necessário ir em:
		Projects -> BuildOptions
		Em ambas as abas de Debug e Release, na aba Compiler Settings -> Compiler Flags habilitar a opção
		Have g++ follow the C++11 ISO C++ language standard [-std=c++11]
		Para compilar e executar o projeto basta clicar F9
		
	O jogo foi feito em c++. Na lógica do jogo, há uma série de condições if que escolhem o destino do jogo de acordo com um input. Como, por exemplo, em menuDepartamentos(int departamento, Produto* produtos, Lista& l), em que é mostrado um menu com os setores do mercado e também a opção “voltar para casa” e, em seguida, é solicitado que o jogador insira um número. Conforme o número inserido, o jogador continua no mesmo menu ou recebe uma mensagem de erro ou é encaminhado para algum setor do mercado com uma série de produtos, que podem ou não estar entre os 60 produtos na lista de compras.
	
	O jogo é dividido em telas e muda de tela conforme os inputs com o auxílio da função refresh, que apaga o texto que está sendo exibido durante o jogo. Há 6 telas: telaInicial (introduz o jogador à história do jogo), telaMemorizar (mostra a lista de compras com os 7 produtos a serem memorizados), telaInicial2 (contém informações da história do jogo), menuMercado (apresenta os setores do mercado e a opção de sair do jogo), menuDepartamentos (apresenta os produtos do setor e a opção de volta para o menuMercado) e menuFinal (apresenta o número de acertos e o de erros e uma mensagem final de acordo com os acertos e erros).
	
	Na função telaInicial, é impresso na tela uma introdução do jogo, apresentando ao jogador que ele representará um menino que irá fazer compras para a sua mãe. Há mudança para a próxima tela, se o jogador digitar 0.
	
	Caso o jogador digite 0, ele é encaminhado para telaMemorizar, que chama a função que gera a lista de compras aleatoriamente e a imprime na tela. Para mudar para a próxima tela, o jogador deve digitar 0.
	
	A função geraListaAleatoria, sorteia números entre 0 e 59 e confere se o número já se o número já foi sorteado antes, através de um vetor em que os números sorteados são inseridos. Em seguida, cada número contido no vetor é comparado com os IDs dos produtos do mercado e, caso sejam iguais, o produto é inserido na lista de compras.
	
	Após a telaMemorizar, há uma tela que insere o jogador na história, falando que o menino perdeu a lista de compras e deve comprar os produtos corretos. Caso o jogador digite 0, o menuMercado é carregado.
	
	No menuMercado, o jogador se encontra no mercado e pode decidir entre percorrer os setores, ver o carrinho de compras e voltar para casa, de acordo com o input. Cada departamento é um número entre 0 e 5. 
	
	Caso o jogador escolha ver o carrinho de compras, a tela mostra os produtos comprados e a possibilidade de retirar um elemento do carrinho de acordo com o input. 
	
	Cada departamento possui seus produtos, mas a estrutura é semelhante. Há a impressão dos 10 produtos do setor e da opção voltar para o menuMercado. Caso o input seja entre 0 e 9, o menino compra o produto referente ao input e ele é comparado com os produtos da lista. Caso o menino compre um produto, ele é inserido no carrinho de compras. Se o produto escolhido já estiver no carrinho, o produto não é inserido novamente.	
	
	Caso o jogador volte ao menuMercado e escolha voltar para casa, o jogo vai para a última tela, que mostra o número de acertos e de erros e a fala da mãe para cada situação possível. Para isso, a função quantidadeCertosErrados é chamada e calcula o número de certos e de errados. Após o cálculo de erros e acertos, é feita uma série de verificações, de acordo com o número de elementos no carrinho, de acertos e de erros.
	
	A função quantidadesCertosErrados verifica se cada produto comprado pelo menino está na lista de compras. Caso esteja, o número de acertos é incrementado. Caso não esteja, o número de erros é incrementado. 
  
A LISTA

	No jogo, a lista de compras da mãe com 7 produtos perdida é uma lista de tipo abstrato de dados. A lista de compras é gerada por meio de um random sem repetição que seleciona um número de 0 a 59, referente ao ID de algum produto do mercado. A cada ID selecionado, um produto é inserido na lista.
	
	Além disso, a lista é impressa na tela, para que, o jogador consiga memorizá-la. 
	
	Quando o produto é selecionado em algum setor do mercado, seu ID é comparado com os IDs dos produtos da lista e esse produto é adicionado a uma lista de carrinho de compras. 
	
	É possível retirar da lista do carrinho de compras os produtos que o jogador ache que não estejam lista de compras da mãe.
