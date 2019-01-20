

#ifndef SPI_AVR_H_
#define SPI_AVR_H_


void SPI_MasterInit(void);
void SPI_SlaveInit(void);
void SPI_SendChar(uint8_t idata);
uint8_t SPI_GetChar(void);




#endif /* SPI_AVR_H_ */