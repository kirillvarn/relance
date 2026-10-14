
void FUN_0052a7a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(m_FuseINIFiles_exref + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_0052a7d0(puVar2 + 3);
  }
  return;
}

