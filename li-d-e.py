# lista duplamente encadeada
class No: 
  def __init__(self, num):
    self.num = num
    self.prox = None
    self.ant = None

  def mostra_no(self):
    print(self.num)

class ListaDuplamenteEncadeada:
  def __init__(self):
    self.primeiro = None
    self.ultimo = None

  def __lista_vazia(self):
    return self.primeiro == None
  
  def inserir(self, num):
    novo = No(num)
    if self.__lista_vazia():
      self.ultimo = novo
    else:
      self.primeiro.ant = novo
    novo.prox = self.primeiro
    self.primeiro = novo
  
  def excluir(self, num):
    atual = self.primeiro
    while atual.num != num:
      atual = atual.prox
      if atual == None:
        return None
    if atual == self.primeiro:
      self.primeiro = atual.prox
    else:
      atual.ant.prox = atual.prox

    if atual == self.ultimo:
      self.ultimo = atual.ant
    else:
      atual.prox.ant = atual.ant
    return atual

  def exibir(self):
    atual = self.primeiro
    while atual != None:
      atual.mostra_no()
      atual = atual.prox

if __name__ == "__main__":
    lista = ListaDuplamenteEncadeada()
    lista.inserir(3)
    lista.inserir(9)
    lista.inserir(8)
    lista.inserir(16)
    lista.inserir(4)
    lista.exibir()
    print("\n")
    lista.excluir(16)
    lista.exibir()