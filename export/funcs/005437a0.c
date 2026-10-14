
void __thiscall FUN_005437a0(int param_1,Vector *param_2,Matrix *param_3)

{
  CShip *this;
  
  if ((((param_1 == 0) || (param_1 == -0xc)) ||
      (this = *(CShip **)(param_1 + 0x10), this == (CShip *)0x0)) ||
     ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
    this = (CShip *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x005437c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CShip::airlock_in(this,param_2,param_3);
  return;
}

