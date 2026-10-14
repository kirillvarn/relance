
void FUN_0053e200(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_3;
  FUN_0046add0(param_2,param_3);
  if (param_1 == param_2) {
    param_3 = FUN_004c4670();
    Reputation::Vibe::SetRank((int *)&param_3,uVar1);
  }
  bVar2 = SinglePlayer();
  if (bVar2) {
    FUN_004b9b20(uVar1);
  }
  return;
}

