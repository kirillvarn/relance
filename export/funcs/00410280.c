
void FUN_00410280(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != (undefined1 *)0x0) {
    (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0x8b);
    *puVar1 = (char)((uint)&param_1 >> 0x10);
    puVar1[1] = (char)((uint)&param_1 >> 8);
    puVar1[2] = (char)&param_1;
  }
  return;
}

