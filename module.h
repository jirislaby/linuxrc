/*
 *
 * module.h      Header file for module.c
 *
 * Copyright (c) 1996-2000  Hubert Mantel, SuSE GmbH  (mantel@suse.de)
 *
 */

enum modid_t
    {
    ID_AHA_152x,
    ID_AHA_154x,
    ID_AHA_1740,
    ID_AHA_2940,
    ID_ADVANSYS,
    ID_BUSLOGIC,
    ID_DTC,
    ID_EATA_ISA,
    ID_EATA_DMA,
    ID_EATA_PIO,
    ID_FDOMAIN,
    ID_NCR_5380,
    ID_NCR_53C406,
    ID_NCR_53C810,
    ID_NCR_53C8XX,
    ID_IOMEGA,
    ID_PAS16,
    ID_QLOGIC_FAS,
    ID_QLOGIC_ISP,
    ID_SEAGATE,
    ID_TRANTOR,
    ID_ULTRAST_14,
    ID_ULTRASTOR,
    ID_GDTH,
    ID_IN2000,
    ID_WD7000,
    ID_AM53C974,
    ID_NCR_53C8X2,
    ID_DC390T,
    ID_53C78XX,
    ID_AMIMEGA,
    ID_INITIO,
    ID_INIA100,
    ID_ACARD,
    ID_PCI2000,
    ID_PCI2220I,
    ID_PSI240I,
    ID_SYM53C416,
    ID_DAC960,
    ID_SMART2,
    ID_QLOGIC_FC,
    ID_SYM_53C8XX,
    ID_IPS,
    ID_DC395,
    ID_SIM710,
    ID_IMM,
    ID_DPT_I2O,

    ID_AZTECH,
    ID_GOLDSTAR,
    ID_SBPCD,
    ID_MCD,
    ID_MCDX,
    ID_OPTCD,
    ID_CM206,
    ID_SANYO,
    ID_ISP16,
    ID_CDU31A,
    ID_SONY535,

    ID_PPCD,
    ID_PARPORT,

    ID_ATEN,
    ID_BPCK,
    ID_COMM,
    ID_DSTR,
    ID_EPAT,
    ID_EPIA,
    ID_FIT2,
    ID_FIT3,
    ID_FRPW,
    ID_FRIQ,
    ID_KBIC,
    ID_KTTI,
    ID_ON20,
    ID_ON26,

    ID_3C501,
    ID_3C503,
    ID_3C509,
    ID_3C590,
    ID_3C90X,
    ID_WD_80X3,
    ID_WD_ULTRA,
    ID_WD_9194,
    ID_E2100,
    ID_DEPCA,
    ID_EWORK,
    ID_EEXPRESS,
    ID_HP_PLUS,
    ID_HP_PCLAN,
    ID_HP_100,
    ID_NE2000,
    ID_NE2K_PCI,
    ID_APRICOT,
    ID_DE_45,
    ID_TULIP,
    ID_TULIP_OLD,
    ID_TOKEN,
    ID_ARCNET,
    ID_3C505,
    ID_3C507,
    ID_AC3200,
    ID_AT1700,
    ID_DE600,
    ID_DE620,
    ID_EEPRO,
    ID_ETH16I,
    ID_FMV18X,
    ID_NI5210,
    ID_PLIP,
    ID_NI6510,
    ID_RTL8139,
    ID_EPIC100,
    ID_TLAN,
    ID_3C515,
    ID_ATP,
    ID_DGRS,
    ID_LANCE,
    ID_PCNET32,
    ID_ULTRA32,
    ID_YELLOWFIN,
    ID_SK55XX,
    ID_EEPRO100,
    ID_EEPRO100_OLD,
    ID_MTOK,
    ID_SKTR,
    ID_RL100ATX,
    ID_VIA_RHINE,
    ID_SK98X,
    ID_ACENIC,
    ID_CS89X0,
    ID_DM9102,
    ID_ES3210,
    ID_LNE390,
    ID_NE3210,
    ID_NI5010,
    ID_OLYMPIC,
    ID_RRUNNER,
    ID_SIS900
    };

#define MOD_TYPE_SCSI      1
#define MOD_TYPE_NET       2
#define MOD_TYPE_OTHER     3

typedef struct
    {
    enum modid_t   id;
    char          *description;
    char           module_name [30];
    char          *example;
    int            order;
    } module_t;

extern void  mod_menu            (void);
extern int   mod_load_module     (char *module_tv, char *params_tv);
extern void  mod_unload_module   (char *module_tv);
extern void  mod_show_modules    (void);
extern void  mod_free_modules    (void);
extern int   mod_get_ram_modules (int type_iv);
extern int   mod_load_by_user    (int mod_type_iv);
extern int   mod_auto            (int type_iv);
extern void  mod_init            (void);
extern int   mod_get_mod_type    (char *name_tv);
extern void  mod_autoload        (void);
