
char FUN_005a89b0(char *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  float10 fVar6;
  double dVar7;
  undefined1 auStack_14 [4];
  double dStack_10;
  
  DAT_0067ea54 = 1;
  cVar5 = '\x01';
  DAT_0067ea50 = 0;
  dVar7 = Timing::read();
  fVar2 = (float)dVar7;
  bVar3 = SinglePlayer();
  if (!bVar3) {
    FUN_00474520();
  }
  if (*param_1 == '\0') {
    while (((DAT_0067ecbe == '\0' && (DAT_0067ea50 == 0)) && (DAT_0067ecd0 != (int *)0x0))) {
      (**(code **)(*DAT_0067ecd0 + 0x2c))();
      bVar3 = SinglePlayer();
      if (bVar3) {
        dVar7 = Timing::read();
        dVar7 = dVar7 - (double)fVar2;
        fVar1 = param_3;
      }
      else {
        dVar7 = Timing::read();
        dVar7 = dVar7 - (double)fVar2;
        fVar1 = param_2;
      }
      if (((double)fVar1 < dVar7) || (*param_1 != '\0')) break;
    }
  }
  bVar3 = SinglePlayer();
  if (!bVar3) {
    FUN_00474590();
  }
  bVar3 = SinglePlayer();
  if ((bVar3) || (*param_1 != '\0')) {
LAB_005a8b45:
    if (DAT_0067ecbe != '\0') goto LAB_005a8b4e;
  }
  else {
    if (DAT_0067ecbe == '\0') {
      if (DAT_0067ea50 != 0) goto LAB_005a8b59;
      FUN_00473ad0(0x736);
      if (*param_1 == '\0') {
        cVar5 = '\x01';
        do {
          if ((DAT_0067ecbe != '\0') || (DAT_0067ea50 != 0)) break;
          cVar4 = FUN_00473be0();
          if ((cVar4 == '\0') || (cVar4 = FUN_005b0b60(auStack_14), cVar4 == '\0')) {
            cVar5 = '\x02';
            break;
          }
          if (DAT_0067ecd0 == (int *)0x0) {
LAB_005a8b3e:
            cVar5 = '\0';
            break;
          }
          (**(code **)(*DAT_0067ecd0 + 0x2c))();
          dVar7 = Timing::read();
          if ((double)param_3 < dVar7 - (double)fVar2) goto LAB_005a8b3e;
          fVar6 = (float10)FUN_0042d680();
          dStack_10 = (double)fVar6;
          FUN_0059e080(dStack_10);
          cVar4 = FUN_00424f30();
          if (cVar4 != '\0') {
            FUN_0059e300();
            FUN_00425080();
            FUN_00425140();
          }
        } while (*param_1 == '\0');
      }
      FUN_00473b60();
      goto LAB_005a8b45;
    }
LAB_005a8b4e:
    cVar5 = '\0';
  }
  if (DAT_0067ea50 == 0) {
    if (((cVar5 == '\x02') && (bVar3 = SinglePlayer(), !bVar3)) &&
       (cVar4 = FUN_00564b20(), cVar4 == '\0')) {
      FUN_005a8260();
      FUN_00564b10(3);
      FUN_005763b0(0xc5,0);
    }
    DAT_0067ea54 = 0;
    return cVar5;
  }
LAB_005a8b59:
  if (DAT_0067ea50 == -0x7fea7bf0) {
    DAT_0067ea54 = 0;
    return '\x06';
  }
  DAT_0067ea54 = 0;
  return (DAT_0067ea50 != -0x7fea79f0) + '\x04';
}

