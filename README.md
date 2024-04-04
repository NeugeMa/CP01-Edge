# CP01 - EDGE 
```http 
Participantes:
• Abner de Paiva Barbosa          | rm558468
• Beatriz Vieira de Novais        | rm554746
• Fernando Luiz Silva Antonio     | rm55201
• Mariana Neugebauer Dourado      | rm550494
• Rodrigo Wolkoff Giorgi          | rm556980
• Thomas de Almeida Reichmann     | rm554812
```


## Informações sobre o Projeto 
Informações sobre alguns componentes usados na criação do projeto: 

- LDR: um resistor dependente de luz. Uma característica é que a resistência dele irá variar de acordo com a quantidade de luz;

- Buzzer: este componente converte sinais elétricos em vibrações mecânicas, criando assim um som que você possa ouvir;

- Resistor: sua função é de limitar o fluxo de corrente elétrica em um circuito. Eles podem ser usados para várias coisas, uma delas em exemplo: é limitar a corrente que passa por um LED para evitar danos;

- Jumpers: são cabos utilizados para fazer conexões entre os diversos componentes do circuito;

- Protoboard: sendo uma placa de circuito impresso (PCB) que permite a montagem temporária de circuitos eletrônicos. Ela é composta por uma matriz de furos condutores interligados internamente por trilhas condutoras, onde os componentes eletrônicos podem ser inseridos e conectados de forma rápida e sem a necessidade de solda.

## Passo a Passo: 
Para você conseguir fazer esse projeto, você vai precisar desses componentes:
- Arduino 
- Fotoresistor (LDR)
- LED
- Resistor 
- Protoboard
- Jumpers 
- Buzzer

Após você conseguir todos os matériais, você pode agora seguir os passos à passos.
1. Montagem da Protoboard
- Insira o Arduino na protoboard, garantindo que os pinos estejam acessíveis.
- Conecte o fotoresistor (LDR) em uma área da protoboard.
- Conecte o LED em outra área da protoboard.
- Conecte o Buzzer em outra área da protoboard.

2. Produzindo as Conexãos: 
- Conecte um dos pinos do fotoresistor (LDR) a um pino analógico do Arduino (por exemplo, A0).
- Conecte o outro pino do fotoresistor (LDR) a um pino de terra (GND) do Arduino.
- Conecte o terminal positivo (anodo) do LED a um pino digital do Arduino (por - exemplo, 9).
- Conecte o terminal negativo (catodo) do LED ao resistor.
- Conecte o outro terminal do resistor a um pino de terra (GND) do Arduino.
- Conecte o Buzzer a um pino digital do Arduino (por exemplo, 8).

## Explicação de como funciona o projeto:
Dentro deste projeto nós utilizamos o Fotoresistor (LDR) e tendo sua função para detectar a intensidade da luz ambiente. 
Caso a intensidadeda luz seja inferior ao valor dado, o LED se acenderá e com o Buzzer emitindo som. 
Já, se a luz for similar/ou a cima ao valor dado, o LED se apagará e já o Buzzer irá parar de emitir som. 