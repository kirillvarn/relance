
void FUN_004a5580(void)

{
  char **ppcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  size_t sVar10;
  byte *pbVar11;
  byte *pbVar12;
  int extraout_ECX;
  byte *pbVar13;
  undefined4 uVar14;
  bool bVar15;
  int *unaff_retaddr;
  void *in_stack_00002014;
  undefined1 *puVar16;
  undefined4 uVar17;
  int *piStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bcc23;
  piStack_c = ExceptionList;
  ExceptionList = &piStack_c;
  FUN_005b7e90();
  iVar3 = *(int *)(extraout_ECX + 0x580);
  if (iVar3 == -1) {
    ExceptionList = in_stack_00002014;
    return;
  }
  iVar4 = *(int *)(extraout_ECX + 0x584);
  FUN_0041c970(&stack0x00000014,0x1000);
  (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0xa8))(0x1d,&stack0x00000014,0);
  FUN_0041c970(&stack0x00000008,0x1000);
  piStack_c = operator_new(0xc);
  *piStack_c = (int)piStack_c;
  piStack_c[1] = (int)piStack_c;
  puStack_8 = (undefined *)0x0;
  piVar7 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_4,0x9ca4);
  puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
  piVar7 = piStack_c + 1;
  iVar9 = FUN_0042a7e0(piStack_c,piStack_c[1]);
  *piVar7 = iVar9;
  **(int **)(iVar9 + 4) = iVar9;
  FUN_0046ea00(iVar9 + 8,&stack0xffffffe8);
  puStack_8 = (undefined *)((int)puStack_8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(1);
  }
  StyleNode::~StyleNode((StyleNode *)&uStack_4);
  uVar17 = 0;
  puVar16 = &stack0xfffffff0;
  sVar10 = wcslen((wchar_t *)&stack0x00000008);
  FUN_0057e2c0(&stack0x00000008,sVar10,puVar16,uVar17);
  FUN_005798b0(0,0);
  FUN_0057b370();
  FUN_0057b3e0(&stack0xfffffff0);
  pbVar11 = (byte *)NewsBroadcastProperties::get_logo_texture
                              ((NewsBroadcastProperties *)
                               (*(int *)(extraout_ECX + 0x580) * 0x60 +
                               *(int *)(extraout_ECX + 0x584)));
  pbVar13 = *(byte **)(extraout_ECX + 0x560);
  pbVar12 = pbVar11;
  if (pbVar13 != (byte *)0x0) {
    do {
      bVar2 = *pbVar12;
      bVar15 = bVar2 < *pbVar13;
      if (bVar2 != *pbVar13) {
LAB_004a574f:
        iVar9 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_004a5754;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar12[1];
      bVar15 = bVar2 < pbVar13[1];
      if (bVar2 != pbVar13[1]) goto LAB_004a574f;
      pbVar12 = pbVar12 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_004a5754:
    if (iVar9 == 0) goto LAB_004a57dd;
  }
  ppcVar1 = (char **)(extraout_ECX + 0x560);
  malloc_strfree(ppcVar1);
  FUN_0042cc50();
  *ppcVar1 = (char *)0x0;
  FUN_0042cc30();
  malloc_strcpy(ppcVar1,(char *)pbVar11);
  cVar6 = FUN_0042d4c0("MV_vidmaterial");
  if (cVar6 == '\0') {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Cannot find material %s in News Vendor",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_NewsVendor.cpp",0x426,"MV_vidmaterial");
  }
  FUN_0042d4f0(*(undefined4 *)(extraout_ECX + 0x560),
               "Interface\\NeuroNet\\NewsVendor\\NewsVendor.txm");
LAB_004a57dd:
  uVar5 = *(uint *)(iVar3 * 0x60 + iVar4 + 0xc);
  uVar17 = **(undefined4 **)(extraout_ECX + 0x58c);
  uVar14 = 0x42b;
  if (uVar5 < *(uint *)(extraout_ECX + 0x590)) {
    uVar17 = (*(undefined4 **)(extraout_ECX + 0x58c))[uVar5];
    uVar14 = *(undefined4 *)(extraout_ECX + 0x594 + uVar5 * 4);
  }
  (**(code **)(**(int **)(extraout_ECX + 0x658) + 0xa8))(4,uVar17,0);
  (**(code **)(**(int **)(extraout_ECX + 0x658) + 0xa8))(3,uVar14,0);
  piStack_c = (int *)*unaff_retaddr;
  while (piStack_c != unaff_retaddr) {
    FUN_0053ab20();
    FUN_0046d680();
  }
  FUN_005b7e1d();
  ExceptionList = in_stack_00002014;
  return;
}

