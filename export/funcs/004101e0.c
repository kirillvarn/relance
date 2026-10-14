
void FUN_004101e0(void)

{
  int iVar1;
  
  for (iVar1 = DAT_006164e0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,iVar1 + 0xc,0);
    *(byte *)(iVar1 + 0xb4) = *(byte *)(iVar1 + 0xb4) & 0xef;
  }
  DAT_006164e0 = 0;
  DAT_006164e4 = 0;
  DAT_006164e8 = 0;
  return;
}

