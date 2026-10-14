
void FUN_00555ba0(char *param_1,int param_2)

{
  float10 fVar1;
  
  malloc_strcpy((char **)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x14) * 4),param_1);
  fVar1 = (float10)(**(code **)(**(int **)Anim_exref + 0x18))
                             (*(int **)Anim_exref,*(undefined4 *)(param_2 + 0x10),param_1);
  *(float *)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0x14) * 4) = (float)fVar1;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  return;
}

