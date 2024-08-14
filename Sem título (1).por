programa {

inclua biblioteca Matematica --> mat

  funcao inicio() {
  real etapa_1, oleo, cenouras,ovos, acucar, farinha_trigo, fermento_po, 
       etapa_2, manteiga, chocolate_po, acucar_refinado, total1, total2, total
  
  real P_oleo, P_cenouras, P_ovos, P_acucar_refinado, P_farinha_trigo, P_fermento, P_manteiga, P_chocolate_po, 
  
  escreva("Informe o valor pago pelo produto")
  leia(P_oleo)
  escreva("Informe o valor pago pelo produto")
  leia(P_cenouras)
  escreva("Informe o valor pago pelo produto")
  leia(P_ovos)
  escreva("Informe o valor pago pelo produto")
  leia(P_farinha_trigo)
  escreva("Informe o valor pago pelo produto")
  leia(P_fermento)
  escreva("Informe o valor pago pelo produto")
  leia(P_manteiga)
  escreva("Informe o valor pago pelo produto")
  leia(P_chocolate_po)
  escreva("Informe o valor pago pelo produto")
  leia(P_acucar_refinado)

total1 = ((120/1000)*P_oleo)
total1 = total1 + ((3/7)*P_cenouras)
total1 = total1 + ((4/12)*P_ovos)
total1 = total1 + ((320/1000)*P_acucar_refinado)
total1 = total1 + ((300/1000)*P_farinha_trigo)
total1 = total1 + ((25/50)*P_fermento)

total = total2 + ((12/500)*P_manteiga)
total = total2 + ((18/200)*P_chocolate_po)
total = total2 + ((150/1000)*P_acucar_refinado)

total = total1 + total2

escreva(mat.arredondar(total1, 2))
escreva(mat.arredondar(total2, 2))
escreva(mat.arredondar(total, 2))
  }
}
