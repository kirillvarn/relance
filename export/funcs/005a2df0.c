
void __fastcall FUN_005a2df0(int *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc000);
  param_1[3] = (int)pvVar1;
  pvVar1 = operator_new(0x3000);
  param_1[4] = (int)pvVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*param_1 == 0) {
    (**(code **)**(undefined4 **)Pipeline_exref)
              (*(undefined4 **)Pipeline_exref,"1.11_IRPVertexBuffer",param_1);
  }
  if (param_1[1] == 0) {
    (**(code **)**(undefined4 **)Pipeline_exref)
              (*(undefined4 **)Pipeline_exref,"1.11_IRPIndexBuffer",param_1 + 1);
  }
  if (param_1[2] == 0) {
    (**(code **)**(undefined4 **)Pipeline_exref)
              (*(undefined4 **)Pipeline_exref,"1.11_IRPDraw",param_1 + 2);
  }
  return;
}

