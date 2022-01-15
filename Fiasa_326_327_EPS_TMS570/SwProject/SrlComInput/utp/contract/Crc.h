
/**********************************************************************************************************************
 * PROTECTION AGAINST MULTIPLE INCLUSION
 *********************************************************************************************************************/
#if (!defined CRC_H_)
#define CRC_H_

typedef P2CONST(uint8, AUTOMATIC, CRC_APPL_DATA) Crc_DataRefType;

FUNC(uint8, CRC_CODE) Crc_CalculateCRC8
                (
                     Crc_DataRefType Crc_DataPtr,
                     uint32 Crc_Length,
                     uint8 Crc_StartValue8
                );

#endif
/* ---- End of File --------------------------------------------------------- */
