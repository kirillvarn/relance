
void FUN_00421690(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined *puVar7;
  char *pcVar8;
  uint uStack_40;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_005b7e90();
  uStack_8 = 1;
  uStack_c = 0x88;
  (**(code **)(**(int **)Pipeline_exref + 0xf0))();
  FUN_00421290();
  if (DAT_006168a8 != 0) {
    piVar3 = *(int **)Pipeline_exref;
    puVar7 = &DAT_005c9698;
    uStack_20 = 0x8d;
    do {
      piStack_1c = *(int **)(puVar7 + 4);
      uStack_28 = 0x4216ee;
      uStack_24 = piVar3;
      (**(code **)(*piVar3 + 0xf0))();
      uStack_20 = *(int *)(puVar7 + 8);
      puVar7 = puVar7 + 8;
    } while (uStack_20 != 0);
    uStack_24 = *(int **)Pipeline_exref;
    piStack_1c = &uStack_c;
    uStack_20 = 0x89;
    uStack_28 = 0x421712;
    (**(code **)(*uStack_24 + 0xf4))();
    uStack_28 = (uint)DAT_006648d8;
    (**(code **)(**(int **)Pipeline_exref + 0xf0))();
    (**(code **)(**(int **)Pipeline_exref + 0x7c))();
    switch(DAT_00616888) {
    case 1:
      uStack_40 = DAT_006168a8;
      pcVar8 = &DAT_006168b8;
      (**(code **)(**(int **)Pipeline_exref + 0x114))(*(int **)Pipeline_exref,1,0x142,&DAT_006168b8)
      ;
      break;
    case 2:
      piVar3 = *(int **)Pipeline_exref;
      if (DAT_006168ac == '\0') {
        uStack_40 = DAT_006168a8;
        pcVar8 = &DAT_006168b8;
        (**(code **)(*piVar3 + 0x114))(piVar3,2,0x142,&DAT_006168b8);
      }
      else {
        uStack_40 = DAT_006168b4;
        pcVar8 = (char *)&DAT_0065e8b8;
        (**(code **)(*piVar3 + 0x118))(piVar3,2,0x142,&DAT_006168b8,DAT_006168a8,&DAT_0065e8b8);
      }
      break;
    case 3:
      uStack_40 = DAT_006168a8;
      pcVar8 = &DAT_006168b8;
      (**(code **)(**(int **)Pipeline_exref + 0x114))(*(int **)Pipeline_exref,3,0x142,&DAT_006168b8)
      ;
      break;
    case 4:
      piVar3 = *(int **)Pipeline_exref;
      if (DAT_006168ac == '\0') {
        uStack_40 = DAT_006168a8;
        pcVar8 = &DAT_006168b8;
        (**(code **)(*piVar3 + 0x114))(piVar3,4,0x142,&DAT_006168b8);
      }
      else {
        uStack_40 = DAT_006168b4;
        pcVar8 = (char *)&DAT_0065e8b8;
        (**(code **)(*piVar3 + 0x118))(piVar3,4,0x142,&DAT_006168b8,DAT_006168a8,&DAT_0065e8b8);
      }
      break;
    case 5:
      uStack_40 = DAT_006168a8;
      pcVar8 = &DAT_006168b8;
      (**(code **)(**(int **)Pipeline_exref + 0x114))(*(int **)Pipeline_exref,5,0x142,&DAT_006168b8)
      ;
      break;
    case 6:
    case 9:
      uStack_40 = DAT_006168a8;
      pcVar8 = &DAT_006168b8;
      (**(code **)(**(int **)Pipeline_exref + 0x114))(*(int **)Pipeline_exref,6,0x142,&DAT_006168b8)
      ;
      break;
    case 7:
      uStack_40 = DAT_006168a8;
      pcVar8 = &DAT_006168b8;
      (**(code **)(**(int **)Pipeline_exref + 0x114))(*(int **)Pipeline_exref,3,0x142,&DAT_006168b8)
      ;
      uStack_40 = (uint)(ushort)((short)DAT_006168a8 - 1);
      (**(code **)(**(int **)Pipeline_exref + 0x118))
                (*(int **)Pipeline_exref,2,0x142,&DAT_006168b8,DAT_006168a8,&uStack_40,2,0);
      break;
    case 8:
      uVar6 = DAT_006168b4;
      if (0xaa9 < DAT_006168b4) {
        uVar6 = 0xaaa;
      }
      pcVar8 = (char *)0x0;
      if (3 < (int)uVar6) {
        iVar4 = 3;
        puVar5 = &DAT_0065e8b8;
        do {
          uVar1 = *puVar5;
          uVar2 = puVar5[1];
          *(undefined2 *)((int)&uStack_28 + (int)pcVar8 * 2) = uVar1;
          *(undefined2 *)((int)&uStack_28 + (int)pcVar8 * 2 + 2) = uVar2;
          uVar2 = puVar5[2];
          *(undefined2 *)((int)&uStack_24 + (int)pcVar8 * 2 + 2) = uVar1;
          uVar1 = puVar5[3];
          *(undefined2 *)((int)&uStack_24 + (int)pcVar8 * 2) = uVar2;
          *(undefined2 *)((int)&uStack_20 + (int)pcVar8 * 2) = uVar2;
          *(undefined2 *)((int)&uStack_20 + (int)pcVar8 * 2 + 2) = uVar1;
          iVar4 = iVar4 + 4;
          puVar5 = puVar5 + 4;
          pcVar8 = pcVar8 + 6;
        } while (iVar4 < (int)uVar6);
      }
      uStack_40 = 0;
      (**(code **)(**(int **)Pipeline_exref + 0x118))
                (*(int **)Pipeline_exref,4,0x142,&DAT_006168b8,DAT_006168a8,&uStack_28,pcVar8);
      break;
    default:
      uStack_40 = 0x1d2;
      pcVar8 = "E:\\FL\\Scratch\\Source\\Client\\cmn\\OpenGL.cpp";
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: glEnd invalid vertex mode (0x%X)\n",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\OpenGL.cpp");
    }
    piVar3 = *(int **)Pipeline_exref;
    puVar7 = &DAT_005c96b0;
    iVar4 = 0x8d;
    do {
      (**(code **)(*piVar3 + 0xf0))(piVar3,iVar4,*(undefined4 *)(puVar7 + 4));
      iVar4 = *(int *)(puVar7 + 8);
      puVar7 = puVar7 + 8;
    } while (iVar4 != 0);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,pcVar8);
  }
  DAT_00616888 = 0xffffffff;
  DAT_006168a8 = 0;
  DAT_006168b4 = 0;
  DAT_006168ac = 0;
  DAT_006648d0 = 0;
  DAT_006648d4 = 0;
  piStack_1c = *(int **)Pipeline_exref;
  uStack_20 = 0x421a43;
  (**(code **)(*piStack_1c + 0x108))();
  return;
}

