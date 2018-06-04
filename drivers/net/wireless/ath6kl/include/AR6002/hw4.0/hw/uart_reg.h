// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation;
//
// Software distributed under the License is distributed on an "AS
// IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
// implied. See the License for the specific language governing
// rights and limitations under the License.
//
//
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================


#ifndef _UART_REG_REG_H_
#define _UART_REG_REG_H_

#define UART_DATA_ADDRESS                        0x00000000
#define UART_DATA_OFFSET                         0x00000000
#define UART_DATA_TX_CSR_MSB                     9
#define UART_DATA_TX_CSR_LSB                     9
#define UART_DATA_TX_CSR_MASK                    0x00000200
#define UART_DATA_TX_CSR_GET(x)                  (((x) & UART_DATA_TX_CSR_MASK) >> UART_DATA_TX_CSR_LSB)
#define UART_DATA_TX_CSR_SET(x)                  (((x) << UART_DATA_TX_CSR_LSB) & UART_DATA_TX_CSR_MASK)
#define UART_DATA_RX_CSR_MSB                     8
#define UART_DATA_RX_CSR_LSB                     8
#define UART_DATA_RX_CSR_MASK                    0x00000100
#define UART_DATA_RX_CSR_GET(x)                  (((x) & UART_DATA_RX_CSR_MASK) >> UART_DATA_RX_CSR_LSB)
#define UART_DATA_RX_CSR_SET(x)                  (((x) << UART_DATA_RX_CSR_LSB) & UART_DATA_RX_CSR_MASK)
#define UART_DATA_TXRX_DATA_MSB                  7
#define UART_DATA_TXRX_DATA_LSB                  0
#define UART_DATA_TXRX_DATA_MASK                 0x000000ff
#define UART_DATA_TXRX_DATA_GET(x)               (((x) & UART_DATA_TXRX_DATA_MASK) >> UART_DATA_TXRX_DATA_LSB)
#define UART_DATA_TXRX_DATA_SET(x)               (((x) << UART_DATA_TXRX_DATA_LSB) & UART_DATA_TXRX_DATA_MASK)

#define UART_CONTROL_ADDRESS                     0x00000004
#define UART_CONTROL_OFFSET                      0x00000004
#define UART_CONTROL_RX_BUSY_MSB                 15
#define UART_CONTROL_RX_BUSY_LSB                 15
#define UART_CONTROL_RX_BUSY_MASK                0x00008000
#define UART_CONTROL_RX_BUSY_GET(x)              (((x) & UART_CONTROL_RX_BUSY_MASK) >> UART_CONTROL_RX_BUSY_LSB)
#define UART_CONTROL_RX_BUSY_SET(x)              (((x) << UART_CONTROL_RX_BUSY_LSB) & UART_CONTROL_RX_BUSY_MASK)
#define UART_CONTROL_TX_BUSY_MSB                 14
#define UART_CONTROL_TX_BUSY_LSB                 14
#define UART_CONTROL_TX_BUSY_MASK                0x00004000
#define UART_CONTROL_TX_BUSY_GET(x)              (((x) & UART_CONTROL_TX_BUSY_MASK) >> UART_CONTROL_TX_BUSY_LSB)
#define UART_CONTROL_TX_BUSY_SET(x)              (((x) << UART_CONTROL_TX_BUSY_LSB) & UART_CONTROL_TX_BUSY_MASK)
#define UART_CONTROL_HOST_INT_ENABLE_MSB         13
#define UART_CONTROL_HOST_INT_ENABLE_LSB         13
#define UART_CONTROL_HOST_INT_ENABLE_MASK        0x00002000
#define UART_CONTROL_HOST_INT_ENABLE_GET(x)      (((x) & UART_CONTROL_HOST_INT_ENABLE_MASK) >> UART_CONTROL_HOST_INT_ENABLE_LSB)
#define UART_CONTROL_HOST_INT_ENABLE_SET(x)      (((x) << UART_CONTROL_HOST_INT_ENABLE_LSB) & UART_CONTROL_HOST_INT_ENABLE_MASK)
#define UART_CONTROL_HOST_INT_MSB                12
#define UART_CONTROL_HOST_INT_LSB                12
#define UART_CONTROL_HOST_INT_MASK               0x00001000
#define UART_CONTROL_HOST_INT_GET(x)             (((x) & UART_CONTROL_HOST_INT_MASK) >> UART_CONTROL_HOST_INT_LSB)
#define UART_CONTROL_HOST_INT_SET(x)             (((x) << UART_CONTROL_HOST_INT_LSB) & UART_CONTROL_HOST_INT_MASK)
#define UART_CONTROL_TX_BREAK_MSB                11
#define UART_CONTROL_TX_BREAK_LSB                11
#define UART_CONTROL_TX_BREAK_MASK               0x00000800
#define UART_CONTROL_TX_BREAK_GET(x)             (((x) & UART_CONTROL_TX_BREAK_MASK) >> UART_CONTROL_TX_BREAK_LSB)
#define UART_CONTROL_TX_BREAK_SET(x)             (((x) << UART_CONTROL_TX_BREAK_LSB) & UART_CONTROL_TX_BREAK_MASK)
#define UART_CONTROL_RX_BREAK_MSB                10
#define UART_CONTROL_RX_BREAK_LSB                10
#define UART_CONTROL_RX_BREAK_MASK               0x00000400
#define UART_CONTROL_RX_BREAK_GET(x)             (((x) & UART_CONTROL_RX_BREAK_MASK) >> UART_CONTROL_RX_BREAK_LSB)
#define UART_CONTROL_RX_BREAK_SET(x)             (((x) << UART_CONTROL_RX_BREAK_LSB) & UART_CONTROL_RX_BREAK_MASK)
#define UART_CONTROL_SERIAL_TX_READY_MSB         9
#define UART_CONTROL_SERIAL_TX_READY_LSB         9
#define UART_CONTROL_SERIAL_TX_READY_MASK        0x00000200
#define UART_CONTROL_SERIAL_TX_READY_GET(x)      (((x) & UART_CONTROL_SERIAL_TX_READY_MASK) >> UART_CONTROL_SERIAL_TX_READY_LSB)
#define UART_CONTROL_SERIAL_TX_READY_SET(x)      (((x) << UART_CONTROL_SERIAL_TX_READY_LSB) & UART_CONTROL_SERIAL_TX_READY_MASK)
#define UART_CONTROL_TX_READY_ORIDE_MSB          8
#define UART_CONTROL_TX_READY_ORIDE_LSB          8
#define UART_CONTROL_TX_READY_ORIDE_MASK         0x00000100
#define UART_CONTROL_TX_READY_ORIDE_GET(x)       (((x) & UART_CONTROL_TX_READY_ORIDE_MASK) >> UART_CONTROL_TX_READY_ORIDE_LSB)
#define UART_CONTROL_TX_READY_ORIDE_SET(x)       (((x) << UART_CONTROL_TX_READY_ORIDE_LSB) & UART_CONTROL_TX_READY_ORIDE_MASK)
#define UART_CONTROL_RX_READY_ORIDE_MSB          7
#define UART_CONTROL_RX_READY_ORIDE_LSB          7
#define UART_CONTROL_RX_READY_ORIDE_MASK         0x00000080
#define UART_CONTROL_RX_READY_ORIDE_GET(x)       (((x) & UART_CONTROL_RX_READY_ORIDE_MASK) >> UART_CONTROL_RX_READY_ORIDE_LSB)
#define UART_CONTROL_RX_READY_ORIDE_SET(x)       (((x) << UART_CONTROL_RX_READY_ORIDE_LSB) & UART_CONTROL_RX_READY_ORIDE_MASK)
#define UART_CONTROL_DMA_ENABLE_MSB              6
#define UART_CONTROL_DMA_ENABLE_LSB              6
#define UART_CONTROL_DMA_ENABLE_MASK             0x00000040
#define UART_CONTROL_DMA_ENABLE_GET(x)           (((x) & UART_CONTROL_DMA_ENABLE_MASK) >> UART_CONTROL_DMA_ENABLE_LSB)
#define UART_CONTROL_DMA_ENABLE_SET(x)           (((x) << UART_CONTROL_DMA_ENABLE_LSB) & UART_CONTROL_DMA_ENABLE_MASK)
#define UART_CONTROL_FLOW_ENABLE_MSB             5
#define UART_CONTROL_FLOW_ENABLE_LSB             5
#define UART_CONTROL_FLOW_ENABLE_MASK            0x00000020
#define UART_CONTROL_FLOW_ENABLE_GET(x)          (((x) & UART_CONTROL_FLOW_ENABLE_MASK) >> UART_CONTROL_FLOW_ENABLE_LSB)
#define UART_CONTROL_FLOW_ENABLE_SET(x)          (((x) << UART_CONTROL_FLOW_ENABLE_LSB) & UART_CONTROL_FLOW_ENABLE_MASK)
#define UART_CONTROL_FLOW_INVERT_MSB             4
#define UART_CONTROL_FLOW_INVERT_LSB             4
#define UART_CONTROL_FLOW_INVERT_MASK            0x00000010
#define UART_CONTROL_FLOW_INVERT_GET(x)          (((x) & UART_CONTROL_FLOW_INVERT_MASK) >> UART_CONTROL_FLOW_INVERT_LSB)
#define UART_CONTROL_FLOW_INVERT_SET(x)          (((x) << UART_CONTROL_FLOW_INVERT_LSB) & UART_CONTROL_FLOW_INVERT_MASK)
#define UART_CONTROL_IFC_ENABLE_MSB              3
#define UART_CONTROL_IFC_ENABLE_LSB              3
#define UART_CONTROL_IFC_ENABLE_MASK             0x00000008
#define UART_CONTROL_IFC_ENABLE_GET(x)           (((x) & UART_CONTROL_IFC_ENABLE_MASK) >> UART_CONTROL_IFC_ENABLE_LSB)
#define UART_CONTROL_IFC_ENABLE_SET(x)           (((x) << UART_CONTROL_IFC_ENABLE_LSB) & UART_CONTROL_IFC_ENABLE_MASK)
#define UART_CONTROL_IFC_DCE_MSB                 2
#define UART_CONTROL_IFC_DCE_LSB                 2
#define UART_CONTROL_IFC_DCE_MASK                0x00000004
#define UART_CONTROL_IFC_DCE_GET(x)              (((x) & UART_CONTROL_IFC_DCE_MASK) >> UART_CONTROL_IFC_DCE_LSB)
#define UART_CONTROL_IFC_DCE_SET(x)              (((x) << UART_CONTROL_IFC_DCE_LSB) & UART_CONTROL_IFC_DCE_MASK)
#define UART_CONTROL_PARITY_ENABLE_MSB           1
#define UART_CONTROL_PARITY_ENABLE_LSB           1
#define UART_CONTROL_PARITY_ENABLE_MASK          0x00000002
#define UART_CONTROL_PARITY_ENABLE_GET(x)        (((x) & UART_CONTROL_PARITY_ENABLE_MASK) >> UART_CONTROL_PARITY_ENABLE_LSB)
#define UART_CONTROL_PARITY_ENABLE_SET(x)        (((x) << UART_CONTROL_PARITY_ENABLE_LSB) & UART_CONTROL_PARITY_ENABLE_MASK)
#define UART_CONTROL_PARITY_EVEN_MSB             0
#define UART_CONTROL_PARITY_EVEN_LSB             0
#define UART_CONTROL_PARITY_EVEN_MASK            0x00000001
#define UART_CONTROL_PARITY_EVEN_GET(x)          (((x) & UART_CONTROL_PARITY_EVEN_MASK) >> UART_CONTROL_PARITY_EVEN_LSB)
#define UART_CONTROL_PARITY_EVEN_SET(x)          (((x) << UART_CONTROL_PARITY_EVEN_LSB) & UART_CONTROL_PARITY_EVEN_MASK)

#define UART_CLKDIV_ADDRESS                      0x00000008
#define UART_CLKDIV_OFFSET                       0x00000008
#define UART_CLKDIV_CLK_SCALE_MSB                23
#define UART_CLKDIV_CLK_SCALE_LSB                16
#define UART_CLKDIV_CLK_SCALE_MASK               0x00ff0000
#define UART_CLKDIV_CLK_SCALE_GET(x)             (((x) & UART_CLKDIV_CLK_SCALE_MASK) >> UART_CLKDIV_CLK_SCALE_LSB)
#define UART_CLKDIV_CLK_SCALE_SET(x)             (((x) << UART_CLKDIV_CLK_SCALE_LSB) & UART_CLKDIV_CLK_SCALE_MASK)
#define UART_CLKDIV_CLK_STEP_MSB                 15
#define UART_CLKDIV_CLK_STEP_LSB                 0
#define UART_CLKDIV_CLK_STEP_MASK                0x0000ffff
#define UART_CLKDIV_CLK_STEP_GET(x)              (((x) & UART_CLKDIV_CLK_STEP_MASK) >> UART_CLKDIV_CLK_STEP_LSB)
#define UART_CLKDIV_CLK_STEP_SET(x)              (((x) << UART_CLKDIV_CLK_STEP_LSB) & UART_CLKDIV_CLK_STEP_MASK)

#define UART_INT_ADDRESS                         0x0000000c
#define UART_INT_OFFSET                          0x0000000c
#define UART_INT_TX_EMPTY_INT_MSB                9
#define UART_INT_TX_EMPTY_INT_LSB                9
#define UART_INT_TX_EMPTY_INT_MASK               0x00000200
#define UART_INT_TX_EMPTY_INT_GET(x)             (((x) & UART_INT_TX_EMPTY_INT_MASK) >> UART_INT_TX_EMPTY_INT_LSB)
#define UART_INT_TX_EMPTY_INT_SET(x)             (((x) << UART_INT_TX_EMPTY_INT_LSB) & UART_INT_TX_EMPTY_INT_MASK)
#define UART_INT_RX_FULL_INT_MSB                 8
#define UART_INT_RX_FULL_INT_LSB                 8
#define UART_INT_RX_FULL_INT_MASK                0x00000100
#define UART_INT_RX_FULL_INT_GET(x)              (((x) & UART_INT_RX_FULL_INT_MASK) >> UART_INT_RX_FULL_INT_LSB)
#define UART_INT_RX_FULL_INT_SET(x)              (((x) << UART_INT_RX_FULL_INT_LSB) & UART_INT_RX_FULL_INT_MASK)
#define UART_INT_RX_BREAK_OFF_INT_MSB            7
#define UART_INT_RX_BREAK_OFF_INT_LSB            7
#define UART_INT_RX_BREAK_OFF_INT_MASK           0x00000080
#define UART_INT_RX_BREAK_OFF_INT_GET(x)         (((x) & UART_INT_RX_BREAK_OFF_INT_MASK) >> UART_INT_RX_BREAK_OFF_INT_LSB)
#define UART_INT_RX_BREAK_OFF_INT_SET(x)         (((x) << UART_INT_RX_BREAK_OFF_INT_LSB) & UART_INT_RX_BREAK_OFF_INT_MASK)
#define UART_INT_RX_BREAK_ON_INT_MSB             6
#define UART_INT_RX_BREAK_ON_INT_LSB             6
#define UART_INT_RX_BREAK_ON_INT_MASK            0x00000040
#define UART_INT_RX_BREAK_ON_INT_GET(x)          (((x) & UART_INT_RX_BREAK_ON_INT_MASK) >> UART_INT_RX_BREAK_ON_INT_LSB)
#define UART_INT_RX_BREAK_ON_INT_SET(x)          (((x) << UART_INT_RX_BREAK_ON_INT_LSB) & UART_INT_RX_BREAK_ON_INT_MASK)
#define UART_INT_RX_PARITY_ERR_INT_MSB           5
#define UART_INT_RX_PARITY_ERR_INT_LSB           5
#define UART_INT_RX_PARITY_ERR_INT_MASK          0x00000020
#define UART_INT_RX_PARITY_ERR_INT_GET(x)        (((x) & UART_INT_RX_PARITY_ERR_INT_MASK) >> UART_INT_RX_PARITY_ERR_INT_LSB)
#define UART_INT_RX_PARITY_ERR_INT_SET(x)        (((x) << UART_INT_RX_PARITY_ERR_INT_LSB) & UART_INT_RX_PARITY_ERR_INT_MASK)
#define UART_INT_TX_OFLOW_ERR_INT_MSB            4
#define UART_INT_TX_OFLOW_ERR_INT_LSB            4
#define UART_INT_TX_OFLOW_ERR_INT_MASK           0x00000010
#define UART_INT_TX_OFLOW_ERR_INT_GET(x)         (((x) & UART_INT_TX_OFLOW_ERR_INT_MASK) >> UART_INT_TX_OFLOW_ERR_INT_LSB)
#define UART_INT_TX_OFLOW_ERR_INT_SET(x)         (((x) << UART_INT_TX_OFLOW_ERR_INT_LSB) & UART_INT_TX_OFLOW_ERR_INT_MASK)
#define UART_INT_RX_OFLOW_ERR_INT_MSB            3
#define UART_INT_RX_OFLOW_ERR_INT_LSB            3
#define UART_INT_RX_OFLOW_ERR_INT_MASK           0x00000008
#define UART_INT_RX_OFLOW_ERR_INT_GET(x)         (((x) & UART_INT_RX_OFLOW_ERR_INT_MASK) >> UART_INT_RX_OFLOW_ERR_INT_LSB)
#define UART_INT_RX_OFLOW_ERR_INT_SET(x)         (((x) << UART_INT_RX_OFLOW_ERR_INT_LSB) & UART_INT_RX_OFLOW_ERR_INT_MASK)
#define UART_INT_RX_FRAMING_ERR_INT_MSB          2
#define UART_INT_RX_FRAMING_ERR_INT_LSB          2
#define UART_INT_RX_FRAMING_ERR_INT_MASK         0x00000004
#define UART_INT_RX_FRAMING_ERR_INT_GET(x)       (((x) & UART_INT_RX_FRAMING_ERR_INT_MASK) >> UART_INT_RX_FRAMING_ERR_INT_LSB)
#define UART_INT_RX_FRAMING_ERR_INT_SET(x)       (((x) << UART_INT_RX_FRAMING_ERR_INT_LSB) & UART_INT_RX_FRAMING_ERR_INT_MASK)
#define UART_INT_TX_READY_INT_MSB                1
#define UART_INT_TX_READY_INT_LSB                1
#define UART_INT_TX_READY_INT_MASK               0x00000002
#define UART_INT_TX_READY_INT_GET(x)             (((x) & UART_INT_TX_READY_INT_MASK) >> UART_INT_TX_READY_INT_LSB)
#define UART_INT_TX_READY_INT_SET(x)             (((x) << UART_INT_TX_READY_INT_LSB) & UART_INT_TX_READY_INT_MASK)
#define UART_INT_RX_VALID_INT_MSB                0
#define UART_INT_RX_VALID_INT_LSB                0
#define UART_INT_RX_VALID_INT_MASK               0x00000001
#define UART_INT_RX_VALID_INT_GET(x)             (((x) & UART_INT_RX_VALID_INT_MASK) >> UART_INT_RX_VALID_INT_LSB)
#define UART_INT_RX_VALID_INT_SET(x)             (((x) << UART_INT_RX_VALID_INT_LSB) & UART_INT_RX_VALID_INT_MASK)

#define UART_INT_EN_ADDRESS                      0x00000010
#define UART_INT_EN_OFFSET                       0x00000010
#define UART_INT_EN_TX_EMPTY_INT_EN_MSB          9
#define UART_INT_EN_TX_EMPTY_INT_EN_LSB          9
#define UART_INT_EN_TX_EMPTY_INT_EN_MASK         0x00000200
#define UART_INT_EN_TX_EMPTY_INT_EN_GET(x)       (((x) & UART_INT_EN_TX_EMPTY_INT_EN_MASK) >> UART_INT_EN_TX_EMPTY_INT_EN_LSB)
#define UART_INT_EN_TX_EMPTY_INT_EN_SET(x)       (((x) << UART_INT_EN_TX_EMPTY_INT_EN_LSB) & UART_INT_EN_TX_EMPTY_INT_EN_MASK)
#define UART_INT_EN_RX_FULL_INT_EN_MSB           8
#define UART_INT_EN_RX_FULL_INT_EN_LSB           8
#define UART_INT_EN_RX_FULL_INT_EN_MASK          0x00000100
#define UART_INT_EN_RX_FULL_INT_EN_GET(x)        (((x) & UART_INT_EN_RX_FULL_INT_EN_MASK) >> UART_INT_EN_RX_FULL_INT_EN_LSB)
#define UART_INT_EN_RX_FULL_INT_EN_SET(x)        (((x) << UART_INT_EN_RX_FULL_INT_EN_LSB) & UART_INT_EN_RX_FULL_INT_EN_MASK)
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_MSB      7
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_LSB      7
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_MASK     0x00000080
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_GET(x)   (((x) & UART_INT_EN_RX_BREAK_OFF_INT_EN_MASK) >> UART_INT_EN_RX_BREAK_OFF_INT_EN_LSB)
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_SET(x)   (((x) << UART_INT_EN_RX_BREAK_OFF_INT_EN_LSB) & UART_INT_EN_RX_BREAK_OFF_INT_EN_MASK)
#define UART_INT_EN_RX_BREAK_ON_INT_EN_MSB       6
#define UART_INT_EN_RX_BREAK_ON_INT_EN_LSB       6
#define UART_INT_EN_RX_BREAK_ON_INT_EN_MASK      0x00000040
#define UART_INT_EN_RX_BREAK_ON_INT_EN_GET(x)    (((x) & UART_INT_EN_RX_BREAK_ON_INT_EN_MASK) >> UART_INT_EN_RX_BREAK_ON_INT_EN_LSB)
#define UART_INT_EN_RX_BREAK_ON_INT_EN_SET(x)    (((x) << UART_INT_EN_RX_BREAK_ON_INT_EN_LSB) & UART_INT_EN_RX_BREAK_ON_INT_EN_MASK)
#define UART_INT_EN_RX_PARITY_ERR_INT_EN_MSB     5
#define UART_INT_EN_RX_PARITY_ERR_INT_EN_LSB     5
#define UART_INT_EN_RX_PARITY_ERR_INT_EN_MASK    0x00000020
#define UART_INT_EN_RX_PARITY_ERR_INT_EN_GET(x)  (((x) & UART_INT_EN_RX_PARITY_ERR_INT_EN_MASK) >> UART_INT_EN_RX_PARITY_ERR_INT_EN_LSB)
#define UART_INT_EN_RX_PARITY_ERR_INT_EN_SET(x)  (((x) << UART_INT_EN_RX_PARITY_ERR_INT_EN_LSB) & UART_INT_EN_RX_PARITY_ERR_INT_EN_MASK)
#define UART_INT_EN_TX_OFLOW_ERR_INT_EN_MSB      4
#define UART_INT_EN_TX_OFLOW_ERR_INT_EN_LSB      4
#define UART_INT_EN_TX_OFLOW_ERR_INT_EN_MASK     0x00000010
#define UART_INT_EN_TX_OFLOW_ERR_INT_EN_GET(x)   (((x) & UART_INT_EN_TX_OFLOW_ERR_INT_EN_MASK) >> UART_INT_EN_TX_OFLOW_ERR_INT_EN_LSB)
#define UART_INT_EN_TX_OFLOW_ERR_INT_EN_SET(x)   (((x) << UART_INT_EN_TX_OFLOW_ERR_INT_EN_LSB) & UART_INT_EN_TX_OFLOW_ERR_INT_EN_MASK)
#define UART_INT_EN_RX_OFLOW_ERR_INT_EN_MSB      3
#define UART_INT_EN_RX_OFLOW_ERR_INT_EN_LSB      3
#define UART_INT_EN_RX_OFLOW_ERR_INT_EN_MASK     0x00000008
#define UART_INT_EN_RX_OFLOW_ERR_INT_EN_GET(x)   (((x) & UART_INT_EN_RX_OFLOW_ERR_INT_EN_MASK) >> UART_INT_EN_RX_OFLOW_ERR_INT_EN_LSB)
#define UART_INT_EN_RX_OFLOW_ERR_INT_EN_SET(x)   (((x) << UART_INT_EN_RX_OFLOW_ERR_INT_EN_LSB) & UART_INT_EN_RX_OFLOW_ERR_INT_EN_MASK)
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_MSB    2
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_LSB    2
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_MASK   0x00000004
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_GET(x) (((x) & UART_INT_EN_RX_FRAMING_ERR_INT_EN_MASK) >> UART_INT_EN_RX_FRAMING_ERR_INT_EN_LSB)
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_SET(x) (((x) << UART_INT_EN_RX_FRAMING_ERR_INT_EN_LSB) & UART_INT_EN_RX_FRAMING_ERR_INT_EN_MASK)
#define UART_INT_EN_TX_READY_INT_EN_MSB          1
#define UART_INT_EN_TX_READY_INT_EN_LSB          1
#define UART_INT_EN_TX_READY_INT_EN_MASK         0x00000002
#define UART_INT_EN_TX_READY_INT_EN_GET(x)       (((x) & UART_INT_EN_TX_READY_INT_EN_MASK) >> UART_INT_EN_TX_READY_INT_EN_LSB)
#define UART_INT_EN_TX_READY_INT_EN_SET(x)       (((x) << UART_INT_EN_TX_READY_INT_EN_LSB) & UART_INT_EN_TX_READY_INT_EN_MASK)
#define UART_INT_EN_RX_VALID_INT_EN_MSB          0
#define UART_INT_EN_RX_VALID_INT_EN_LSB          0
#define UART_INT_EN_RX_VALID_INT_EN_MASK         0x00000001
#define UART_INT_EN_RX_VALID_INT_EN_GET(x)       (((x) & UART_INT_EN_RX_VALID_INT_EN_MASK) >> UART_INT_EN_RX_VALID_INT_EN_LSB)
#define UART_INT_EN_RX_VALID_INT_EN_SET(x)       (((x) << UART_INT_EN_RX_VALID_INT_EN_LSB) & UART_INT_EN_RX_VALID_INT_EN_MASK)


#ifndef __ASSEMBLER__

typedef struct uart_reg_reg_s {
  volatile unsigned int uart_data;
  volatile unsigned int uart_control;
  volatile unsigned int uart_clkdiv;
  volatile unsigned int uart_int;
  volatile unsigned int uart_int_en;
} uart_reg_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _UART_REG_H_ */
