class No:
  def __init__(self, num):
    self.num = num
    self.prox = None
  
  def print_no(self):
    print(self.num)

class ListaEncadeada:
  def __init__(self):
    self.primeiro = None

  def inserir(self, num):
    novo = No(num)
    novo.prox = self.primeiro
    self.primeiro = novo

  def remover(self): # remove o primeiro elemento que foi inserido
    if self.primeiro == None:
      print('A lista está vazia')
      return None
    
    temp = self.primeiro
    self.primeiro = self.primeiro.prox
    return temp

  def mostrar(self):
    if self.primeiro == None:
      print('A lista está vazia')
      return None
    
    atual = self.primeiro
    while atual != None:
      atual.print_no()
      atual = atual.prox

  def buscar(self, num):
    if self.primeiro == None:
      print('A lista está vazia')
      return None

    atual = self.primeiro
    while atual.num != num:
      if atual.prox == None:
        return None
      else:
        atual = atual.prox
    return atual



if __name__ == "__main__":
    lista = ListaEncadeada()
    lista.inserir(2)
    lista.inserir(6)
    lista.inserir(8)
    lista.inserir(7)
    lista.mostrar()