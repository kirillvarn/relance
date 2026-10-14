
void FUN_00410240(byte *param_1)

{
  (**(code **)(**(int **)Pipeline_exref + 0xf0))
            (*(int **)Pipeline_exref,0x8b,
             ((*param_1 | 0xffffff00) << 8 | (uint)param_1[1]) << 8 | (uint)param_1[2]);
  return;
}

