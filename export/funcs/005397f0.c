
void __thiscall FUN_005397f0(int param_1,uint param_2)

{
  CSimple *this;
  
  this = *(CSimple **)(param_1 + 0x10);
  if ((this == (CSimple *)0x0) || (((byte)*(undefined4 *)(this + 0x4c) & 3) != 3)) {
    this = (CSimple *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00539806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CSimple::SetOwnerPlayer(this,param_2);
  return;
}

