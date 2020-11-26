import numpy as np
class Pilha:

  def __init__(self, capacidade): # o construtor é obrigatorio informar a capacidade da pilha
    self.__capacidade = capacidade
    self.__topo = -1 # indica onde está o topo da pilha, se for -1 entao a pilha ta vazia
    self.__valores = np.empty(self.__capacidade, dtype=int) # os valores da pilha do tipo inteiro
    # pra proxima questão é só mudar o tipo int para "String" que ler os dados em texto para cadastrar o nome
    # dos personagens da Marvel em uma pilha
  
  def __pilha_vazia(self): # verificar se a pilha esta vazia 
    if self.__topo == -1:
      return True # a pilha esta vazia
    else:
      return False # tem ao menos um elemeto na pilha
  
  def __pilha_cheia(self): # verificar se a pilha esta cheia 
    if self.__topo == self.__capacidade - 1:
      return True # a pilha esta cheia
    else:
      return False # nao tem nada na pilha


  def push(self, valor): # e obrigatorio informar o dado que quer empilhar 
    if self.__pilha_cheia(): 
      print('nao cabe mais nada na pilha')
    else:
      self.__topo += 1 # incrementa o topo da pilha
      self.__valores[self.__topo] = valor # o valor do topo+1 recebe o atributo valor

  def pop(self):
    if self.__pilha_vazia():
      print('nao tem nada na pilha, ela esta vazia')
    else:
      self.__topo -= 1 # nao precisa apagar o elemento e so decrementar o topo
      # o gerenciador de lixo de memória do python desaloca da memória automagicamente

  def top(self):
    if self.__topo != -1: # se a pilha não estiver vazia
      return self.__valores[self.__topo] # retorne o topo da pilha
    else:
      return -1 # se não entao -1 signfica que a pilha está vazia
  def listar(self):
    if self.__topo != -1: # se a pilha não estiver vazia
        for i in range(self.__topo+1):
            print(self.__valores[i])
    else:
      return -1 # se não entao -1 signfica que a pilha está vazia

if __name__ == "__main__": # funcao principal + testes
    pilha = Pilha(5) # criar um objeto pilha que cabe 5 elementos
    pilha.push(1)
    pilha.push(2)
    pilha.push(3)
    pilha.push(4)
    pilha.push(5)
    pilha.listar()
    print("\n")
    pilha.pop()
    pilha.pop()
    pilha.listar()
    print("topo da pilha: ", pilha.top())