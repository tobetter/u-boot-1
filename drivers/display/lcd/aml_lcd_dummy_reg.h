
/*******  dummy register *********/


#if (defined(CONFIG_CHIP_AML_GXB) || \
		defined(CONFIG_AML_MESON_GXTVBB) || \
		defined(CONFIG_AML_MESON_GXL) || \
		defined(CONFIG_AML_MESON_GXM) || \
		defined(CONFIG_AML_MESON_TXL) || \
		defined(CONFIG_AML_MESON_TXLX))

#define REG_BASE_DSI_HOST          		(0xFFD00000L)

/* ********  mipi_dsi_host = 0xffD06000(0xffD06000 - 0xffD06fff) *********/
#define		MIPI_DSI_DWC_VERSION_OS                (0x1800)
#define	P_MIPI_DSI_DWC_VERSION_OS                  (volatile unsigned int *)((0x1800  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PWR_UP_OS                 (0x1801)
#define	P_MIPI_DSI_DWC_PWR_UP_OS                   (volatile unsigned int *)((0x1801  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_CLKMGR_CFG_OS             (0x1802)
#define	P_MIPI_DSI_DWC_CLKMGR_CFG_OS               (volatile unsigned int *)((0x1802  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_DPI_VCID_OS               (0x1803)
#define	P_MIPI_DSI_DWC_DPI_VCID_OS                 (volatile unsigned int *)((0x1803  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_DPI_COLOR_CODING_OS       (0x1804)
#define	P_MIPI_DSI_DWC_DPI_COLOR_CODING_OS         (volatile unsigned int *)((0x1804  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_DPI_CFG_POL_OS            (0x1805)
#define	P_MIPI_DSI_DWC_DPI_CFG_POL_OS              (volatile unsigned int *)((0x1805  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_DPI_LP_CMD_TIM_OS         (0x1806)
#define	P_MIPI_DSI_DWC_DPI_LP_CMD_TIM_OS           (volatile unsigned int *)((0x1806  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PCKHDL_CFG_OS             (0x180b)
#define	P_MIPI_DSI_DWC_PCKHDL_CFG_OS               (volatile unsigned int *)((0x180b  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_GEN_VCID_OS               (0x180c)
#define	P_MIPI_DSI_DWC_GEN_VCID_OS                 (volatile unsigned int *)((0x180c  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_MODE_CFG_OS               (0x180d)
#define	P_MIPI_DSI_DWC_MODE_CFG_OS                 (volatile unsigned int *)((0x180d  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_MODE_CFG_OS           (0x180e)
#define	P_MIPI_DSI_DWC_VID_MODE_CFG_OS             (volatile unsigned int *)((0x180e  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_PKT_SIZE_OS           (0x180f)
#define	P_MIPI_DSI_DWC_VID_PKT_SIZE_OS             (volatile unsigned int *)((0x180f  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_NUM_CHUNKS_OS         (0x1810)
#define	P_MIPI_DSI_DWC_VID_NUM_CHUNKS_OS           (volatile unsigned int *)((0x1810  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_NULL_SIZE_OS          (0x1811)
#define	P_MIPI_DSI_DWC_VID_NULL_SIZE_OS            (volatile unsigned int *)((0x1811  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_HSA_TIME_OS           (0x1812)
#define	P_MIPI_DSI_DWC_VID_HSA_TIME_OS             (volatile unsigned int *)((0x1812  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_HBP_TIME_OS           (0x1813)
#define	P_MIPI_DSI_DWC_VID_HBP_TIME_OS             (volatile unsigned int *)((0x1813  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_HLINE_TIME_OS         (0x1814)
#define	P_MIPI_DSI_DWC_VID_HLINE_TIME_OS           (volatile unsigned int *)((0x1814  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_VSA_LINES_OS          (0x1815)
#define	P_MIPI_DSI_DWC_VID_VSA_LINES_OS            (volatile unsigned int *)((0x1815  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_VBP_LINES_OS          (0x1816)
#define	P_MIPI_DSI_DWC_VID_VBP_LINES_OS            (volatile unsigned int *)((0x1816  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_VFP_LINES_OS          (0x1817)
#define	P_MIPI_DSI_DWC_VID_VFP_LINES_OS            (volatile unsigned int *)((0x1817  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_VID_VACTIVE_LINES_OS      (0x1818)
#define	P_MIPI_DSI_DWC_VID_VACTIVE_LINES_OS        (volatile unsigned int *)((0x1818  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_EDPI_CMD_SIZE_OS          (0x1819)
#define	P_MIPI_DSI_DWC_EDPI_CMD_SIZE_OS            (volatile unsigned int *)((0x1819  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_CMD_MODE_CFG_OS           (0x181a)
#define	P_MIPI_DSI_DWC_CMD_MODE_CFG_OS             (volatile unsigned int *)((0x181a  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_GEN_HDR_OS                (0x181b)
#define	P_MIPI_DSI_DWC_GEN_HDR_OS                  (volatile unsigned int *)((0x181b  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_GEN_PLD_DATA_OS           (0x181c)
#define	P_MIPI_DSI_DWC_GEN_PLD_DATA_OS             (volatile unsigned int *)((0x181c  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_CMD_PKT_STATUS_OS         (0x181d)
#define	P_MIPI_DSI_DWC_CMD_PKT_STATUS_OS           (volatile unsigned int *)((0x181d  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_TO_CNT_CFG_OS             (0x181e)
#define	P_MIPI_DSI_DWC_TO_CNT_CFG_OS               (volatile unsigned int *)((0x181e  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_HS_RD_TO_CNT_OS           (0x181f)
#define	P_MIPI_DSI_DWC_HS_RD_TO_CNT_OS             (volatile unsigned int *)((0x181f  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_LP_RD_TO_CNT_OS           (0x1820)
#define	P_MIPI_DSI_DWC_LP_RD_TO_CNT_OS             (volatile unsigned int *)((0x1820  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_HS_WR_TO_CNT_OS           (0x1821)
#define	P_MIPI_DSI_DWC_HS_WR_TO_CNT_OS             (volatile unsigned int *)((0x1821  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_LP_WR_TO_CNT_OS           (0x1822)
#define	P_MIPI_DSI_DWC_LP_WR_TO_CNT_OS             (volatile unsigned int *)((0x1822  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_BTA_TO_CNT_OS             (0x1823)
#define	P_MIPI_DSI_DWC_BTA_TO_CNT_OS               (volatile unsigned int *)((0x1823  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_SDF_3D_OS                 (0x1824)
#define	P_MIPI_DSI_DWC_SDF_3D_OS                   (volatile unsigned int *)((0x1824  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_LPCLK_CTRL_OS             (0x1825)
#define	P_MIPI_DSI_DWC_LPCLK_CTRL_OS               (volatile unsigned int *)((0x1825  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_TMR_LPCLK_CFG_OS      (0x1826)
#define	P_MIPI_DSI_DWC_PHY_TMR_LPCLK_CFG_OS        (volatile unsigned int *)((0x1826  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_TMR_CFG_OS            (0x1827)
#define	P_MIPI_DSI_DWC_PHY_TMR_CFG_OS              (volatile unsigned int *)((0x1827  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_RSTZ_OS               (0x1828)
#define	P_MIPI_DSI_DWC_PHY_RSTZ_OS                 (volatile unsigned int *)((0x1828  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_IF_CFG_OS             (0x1829)
#define	P_MIPI_DSI_DWC_PHY_IF_CFG_OS               (volatile unsigned int *)((0x1829  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_ULPS_CTRL_OS          (0x182a)
#define	P_MIPI_DSI_DWC_PHY_ULPS_CTRL_OS            (volatile unsigned int *)((0x182a  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_TX_TRIGGERS_OS        (0x182b)
#define	P_MIPI_DSI_DWC_PHY_TX_TRIGGERS_OS          (volatile unsigned int *)((0x182b  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_STATUS_OS             (0x182c)
#define	P_MIPI_DSI_DWC_PHY_STATUS_OS               (volatile unsigned int *)((0x182c  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_TST_CTRL0_OS          (0x182d)
#define	P_MIPI_DSI_DWC_PHY_TST_CTRL0_OS            (volatile unsigned int *)((0x182d  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_PHY_TST_CTRL1_OS          (0x182e)
#define	P_MIPI_DSI_DWC_PHY_TST_CTRL1_OS            (volatile unsigned int *)((0x182e  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_INT_ST0_OS                (0x182f)
#define	P_MIPI_DSI_DWC_INT_ST0_OS                  (volatile unsigned int *)((0x182f  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_INT_ST1_OS                (0x1830)
#define	P_MIPI_DSI_DWC_INT_ST1_OS                  (volatile unsigned int *)((0x1830  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_INT_MSK0_OS               (0x1831)
#define	P_MIPI_DSI_DWC_INT_MSK0_OS                 (volatile unsigned int *)((0x1831  << 2) + 0xffd06000)
#define 	MIPI_DSI_DWC_INT_MSK1_OS               (0x1832)
#define	P_MIPI_DSI_DWC_INT_MSK1_OS                 (volatile unsigned int *)((0x1832  << 2) + 0xffd06000)

#define 	MIPI_DSI_TOP_SW_RESET                  (0x18f0)
#define	P_MIPI_DSI_TOP_SW_RESET                    (volatile unsigned int *)((0x18f0  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_CLK_CNTL                  (0x18f1)
#define	P_MIPI_DSI_TOP_CLK_CNTL                    (volatile unsigned int *)((0x18f1  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_CNTL                      (0x18f2)
#define	P_MIPI_DSI_TOP_CNTL                        (volatile unsigned int *)((0x18f2  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_SUSPEND_CNTL              (0x18f3)
#define	P_MIPI_DSI_TOP_SUSPEND_CNTL                (volatile unsigned int *)((0x18f3  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_SUSPEND_LINE              (0x18f4)
#define	P_MIPI_DSI_TOP_SUSPEND_LINE                (volatile unsigned int *)((0x18f4  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_SUSPEND_PIX               (0x18f5)
#define	P_MIPI_DSI_TOP_SUSPEND_PIX                 (volatile unsigned int *)((0x18f5  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_MEAS_CNTL                 (0x18f6)
#define	P_MIPI_DSI_TOP_MEAS_CNTL                   (volatile unsigned int *)((0x18f6  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_STAT                      (0x18f7)
#define	P_MIPI_DSI_TOP_STAT                        (volatile unsigned int *)((0x18f7  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_MEAS_STAT_TE0             (0x18f8)
#define	P_MIPI_DSI_TOP_MEAS_STAT_TE0               (volatile unsigned int *)((0x18f8  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_MEAS_STAT_TE1             (0x18f9)
#define	P_MIPI_DSI_TOP_MEAS_STAT_TE1               (volatile unsigned int *)((0x18f9  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_MEAS_STAT_VS0             (0x18fa)
#define	P_MIPI_DSI_TOP_MEAS_STAT_VS0               (volatile unsigned int *)((0x18fa  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_MEAS_STAT_VS1             (0x18fb)
#define	P_MIPI_DSI_TOP_MEAS_STAT_VS1               (volatile unsigned int *)((0x18fb  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_INTR_CNTL_STAT            (0x18fc)
#define	P_MIPI_DSI_TOP_INTR_CNTL_STAT              (volatile unsigned int *)((0x1800  << 2) + 0xffd06000)
#define 	MIPI_DSI_TOP_MEM_PD                    (0x18fd)
#define	P_MIPI_DSI_TOP_MEM_PD                      (volatile unsigned int *)((0x1800  << 2) + 0xffd06000)


//=============    MIPI_DSI_PHY   ==========================
#define     MIPI_DSI_PHY_CTRL                                  (0xff640000 + (0x000 << 2))
#define SEC_MIPI_DSI_PHY_CTRL                                  (0xff640000 + (0x000 << 2))
#define   P_MIPI_DSI_PHY_CTRL                                  (volatile uint32_t *)(0xff640000 + (0x000 << 2))
#define     MIPI_DSI_CHAN_CTRL                                 (0xff640000 + (0x001 << 2))
#define SEC_MIPI_DSI_CHAN_CTRL                                 (0xff640000 + (0x001 << 2))
#define   P_MIPI_DSI_CHAN_CTRL                                 (volatile uint32_t *)(0xff640000 + (0x001 << 2))
#define     MIPI_DSI_CHAN_STS                                  (0xff640000 + (0x002 << 2))
#define SEC_MIPI_DSI_CHAN_STS                                  (0xff640000 + (0x002 << 2))
#define   P_MIPI_DSI_CHAN_STS                                  (volatile uint32_t *)(0xff640000 + (0x002 << 2))
#define     MIPI_DSI_CLK_TIM                                   (0xff640000 + (0x003 << 2))
#define SEC_MIPI_DSI_CLK_TIM                                   (0xff640000 + (0x003 << 2))
#define   P_MIPI_DSI_CLK_TIM                                   (volatile uint32_t *)(0xff640000 + (0x003 << 2))
#define     MIPI_DSI_HS_TIM                                    (0xff640000 + (0x004 << 2))
#define SEC_MIPI_DSI_HS_TIM                                    (0xff640000 + (0x004 << 2))
#define   P_MIPI_DSI_HS_TIM                                    (volatile uint32_t *)(0xff640000 + (0x004 << 2))
#define     MIPI_DSI_LP_TIM                                    (0xff640000 + (0x005 << 2))
#define SEC_MIPI_DSI_LP_TIM                                    (0xff640000 + (0x005 << 2))
#define   P_MIPI_DSI_LP_TIM                                    (volatile uint32_t *)(0xff640000 + (0x005 << 2))
#define     MIPI_DSI_ANA_UP_TIM                                (0xff640000 + (0x006 << 2))
#define SEC_MIPI_DSI_ANA_UP_TIM                                (0xff640000 + (0x006 << 2))
#define   P_MIPI_DSI_ANA_UP_TIM                                (volatile uint32_t *)(0xff640000 + (0x006 << 2))
#define     MIPI_DSI_INIT_TIM                                  (0xff640000 + (0x007 << 2))
#define SEC_MIPI_DSI_INIT_TIM                                  (0xff640000 + (0x007 << 2))
#define   P_MIPI_DSI_INIT_TIM                                  (volatile uint32_t *)(0xff640000 + (0x007 << 2))
#define     MIPI_DSI_WAKEUP_TIM                                (0xff640000 + (0x008 << 2))
#define SEC_MIPI_DSI_WAKEUP_TIM                                (0xff640000 + (0x008 << 2))
#define   P_MIPI_DSI_WAKEUP_TIM                                (volatile uint32_t *)(0xff640000 + (0x008 << 2))
#define     MIPI_DSI_LPOK_TIM                                  (0xff640000 + (0x009 << 2))
#define SEC_MIPI_DSI_LPOK_TIM                                  (0xff640000 + (0x009 << 2))
#define   P_MIPI_DSI_LPOK_TIM                                  (volatile uint32_t *)(0xff640000 + (0x009 << 2))
#define     MIPI_DSI_LP_WCHDOG                                 (0xff640000 + (0x00a << 2))
#define SEC_MIPI_DSI_LP_WCHDOG                                 (0xff640000 + (0x00a << 2))
#define   P_MIPI_DSI_LP_WCHDOG                                 (volatile uint32_t *)(0xff640000 + (0x00a << 2))
#define     MIPI_DSI_ANA_CTRL                                  (0xff640000 + (0x00b << 2))
#define SEC_MIPI_DSI_ANA_CTRL                                  (0xff640000 + (0x00b << 2))
#define   P_MIPI_DSI_ANA_CTRL                                  (volatile uint32_t *)(0xff640000 + (0x00b << 2))
#define     MIPI_DSI_CLK_TIM1                                  (0xff640000 + (0x00c << 2))
#define SEC_MIPI_DSI_CLK_TIM1                                  (0xff640000 + (0x00c << 2))
#define   P_MIPI_DSI_CLK_TIM1                                  (volatile uint32_t *)(0xff640000 + (0x00c << 2))
#define     MIPI_DSI_TURN_WCHDOG                               (0xff640000 + (0x00d << 2))
#define SEC_MIPI_DSI_TURN_WCHDOG                               (0xff640000 + (0x00d << 2))
#define   P_MIPI_DSI_TURN_WCHDOG                               (volatile uint32_t *)(0xff640000 + (0x00d << 2))
#define     MIPI_DSI_ULPS_CHECK                                (0xff640000 + (0x00e << 2))
#define SEC_MIPI_DSI_ULPS_CHECK                                (0xff640000 + (0x00e << 2))
#define   P_MIPI_DSI_ULPS_CHECK                                (volatile uint32_t *)(0xff640000 + (0x00e << 2))
#define     MIPI_DSI_TEST_CTRL0                                (0xff640000 + (0x00f << 2))
#define SEC_MIPI_DSI_TEST_CTRL0                                (0xff640000 + (0x00f << 2))
#define   P_MIPI_DSI_TEST_CTRL0                                (volatile uint32_t *)(0xff640000 + (0x00f << 2))
#define     MIPI_DSI_TEST_CTRL1                                (0xff640000 + (0x010 << 2))
#define SEC_MIPI_DSI_TEST_CTRL1                                (0xff640000 + (0x010 << 2))
#define   P_MIPI_DSI_TEST_CTRL1                                (volatile uint32_t *)(0xff640000 + (0x010 << 2))
#define     HHI_MIPI_CNTL0                                     (0xff63c000 + (0x00 << 2))
#define SEC_HHI_MIPI_CNTL0                                     (0xff63c000 + (0x00 << 2))
#define   P_HHI_MIPI_CNTL0                                     (volatile uint32_t *)(0xff63c000 + (0x00 << 2))
#define     HHI_MIPI_CNTL1                                     (0xff63c000 + (0x01 << 2))
#define SEC_HHI_MIPI_CNTL1                                     (0xff63c000 + (0x01 << 2))
#define   P_HHI_MIPI_CNTL1                                     (volatile uint32_t *)(0xff63c000 + (0x01 << 2))
#define     HHI_MIPI_CNTL2                                     (0xff63c000 + (0x02 << 2))
#define SEC_HHI_MIPI_CNTL2                                     (0xff63c000 + (0x02 << 2))
#define   P_HHI_MIPI_CNTL2                                     (volatile uint32_t *)(0xff63c000 + (0x02 << 2))

#endif

#if (defined(CONFIG_CHIP_AML_GXB) || \
		defined(CONFIG_AML_MESON_GXTVBB) || \
		defined(CONFIG_AML_MESON_GXM))
#define     HHI_GP0_PLL_CNTL1                                  (0xc883c000 + (0x15 << 2))
#define SEC_HHI_GP0_PLL_CNTL1                                  (0xda83c000 + (0x15 << 2))
#define   P_HHI_GP0_PLL_CNTL1                                  (volatile uint32_t *)(0xc883c000 + (0x15 << 2))
#endif



#if (defined(CONFIG_AML_MESON_AXG))
#define PWM_PWM_E                                  ((0x6400  << 2) + 0xffd00000)
#define PWM_PWM_F                                  ((0x6401  << 2) + 0xffd00000)
#define PWM_MISC_REG_EF                            ((0x6402  << 2) + 0xffd00000)
#define PWM_DELTA_SIGMA_EF                         ((0x6403  << 2) + 0xffd00000)
#define PWM_TIME_EF                                ((0x6404  << 2) + 0xffd00000)
#define PWM_E2                                     ((0x6405  << 2) + 0xffd00000)
#define PWM_F2                                     ((0x6406  << 2) + 0xffd00000)
#define PWM_BLINK_EF                               ((0x6407  << 2) + 0xffd00000)
#define     HHI_VIID_DIVIDER_CNTL                              (0xff63c000 + (0x4c << 2))
#define SEC_HHI_VIID_DIVIDER_CNTL                              (0xff63c000 + (0x4c << 2))
#define   P_HHI_VIID_DIVIDER_CNTL                              (volatile uint32_t *)(0xff63c000 + (0x4c << 2))
#define     HHI_HDMI_PLL_CNTL                                  (0xff63c000 + (0xc8 << 2))
#define SEC_HHI_HDMI_PLL_CNTL                                  (0xff63c000 + (0xc8 << 2))
#define   P_HHI_HDMI_PLL_CNTL                                  (volatile uint32_t *)(0xff63c000 + (0xc8 << 2))
#define     HHI_HDMI_PLL_CNTL1                                 (0xff63c000 + (0xc9 << 2))
#define SEC_HHI_HDMI_PLL_CNTL1                                 (0xff63c000 + (0xc9 << 2))
#define   P_HHI_HDMI_PLL_CNTL1                                 (volatile uint32_t *)(0xff63c000 + (0xc9 << 2))
#define     HHI_HDMI_PLL_CNTL2                                 (0xff63c000 + (0xca << 2))
#define SEC_HHI_HDMI_PLL_CNTL2                                 (0xff63c000 + (0xca << 2))
#define   P_HHI_HDMI_PLL_CNTL2                                 (volatile uint32_t *)(0xff63c000 + (0xca << 2))
#define     HHI_HDMI_PLL_CNTL3                                 (0xff63c000 + (0xcb << 2))
#define SEC_HHI_HDMI_PLL_CNTL3                                 (0xff63c000 + (0xcb << 2))
#define   P_HHI_HDMI_PLL_CNTL3                                 (volatile uint32_t *)(0xff63c000 + (0xcb << 2))
#define     HHI_HDMI_PLL_CNTL4                                 (0xff63c000 + (0xcc << 2))
#define SEC_HHI_HDMI_PLL_CNTL4                                 (0xff63c000 + (0xcc << 2))
#define   P_HHI_HDMI_PLL_CNTL4                                 (volatile uint32_t *)(0xff63c000 + (0xcc << 2))
#define     HHI_HDMI_PLL_CNTL5                                 (0xff63c000 + (0xcd << 2))
#define SEC_HHI_HDMI_PLL_CNTL5                                 (0xff63c000 + (0xcd << 2))
#define   P_HHI_HDMI_PLL_CNTL5                                 (volatile uint32_t *)(0xff63c000 + (0xcd << 2))
#define     HHI_DIF_CSI_PHY_CNTL0                              (0xff63c000 + (0xd8 << 2))
#define SEC_HHI_DIF_CSI_PHY_CNTL0                              (0xff63c000 + (0xd8 << 2))
#define   P_HHI_DIF_CSI_PHY_CNTL0                              (volatile uint32_t *)(0xff63c000 + (0xd8 << 2))
#define     HHI_DIF_CSI_PHY_CNTL1                              (0xff63c000 + (0xd9 << 2))
#define SEC_HHI_DIF_CSI_PHY_CNTL1                              (0xff63c000 + (0xd9 << 2))
#define   P_HHI_DIF_CSI_PHY_CNTL1                              (volatile uint32_t *)(0xff63c000 + (0xd9 << 2))
#define     HHI_DIF_CSI_PHY_CNTL2                              (0xff63c000 + (0xda << 2))
#define SEC_HHI_DIF_CSI_PHY_CNTL2                              (0xff63c000 + (0xda << 2))
#define   P_HHI_DIF_CSI_PHY_CNTL2                              (volatile uint32_t *)(0xff63c000 + (0xda << 2))
#define     HHI_DIF_CSI_PHY_CNTL3                              (0xff63c000 + (0xdb << 2))
#define SEC_HHI_DIF_CSI_PHY_CNTL3                              (0xff63c000 + (0xdb << 2))
#define   P_HHI_DIF_CSI_PHY_CNTL3                              (volatile uint32_t *)(0xff63c000 + (0xdb << 2))
#define     HHI_DIF_CSI_PHY_CNTL4                              (0xff63c000 + (0xdc << 2))
#define SEC_HHI_DIF_CSI_PHY_CNTL4                              (0xff63c000 + (0xdc << 2))
#define   P_HHI_DIF_CSI_PHY_CNTL4                              (volatile uint32_t *)(0xff63c000 + (0xdc << 2))
#define     HHI_DIF_CSI_PHY_CNTL5                              (0xff63c000 + (0xdd << 2))
#define SEC_HHI_DIF_CSI_PHY_CNTL5                              (0xff63c000 + (0xdd << 2))
#define   P_HHI_DIF_CSI_PHY_CNTL5                              (volatile uint32_t *)(0xff63c000 + (0xdd << 2))
#define     HHI_DSI_LVDS_EDP_CNTL0                             (0xff63c000 + (0xd1 << 2))
#define SEC_HHI_DSI_LVDS_EDP_CNTL0                             (0xff63c000 + (0xd1 << 2))
#define   P_HHI_DSI_LVDS_EDP_CNTL0                             (volatile uint32_t *)(0xff63c000 + (0xd1 << 2))
#define     HHI_DSI_LVDS_EDP_CNTL1                             (0xff63c000 + (0xd2 << 2))
#define SEC_HHI_DSI_LVDS_EDP_CNTL1                             (0xff63c000 + (0xd2 << 2))
#define   P_HHI_DSI_LVDS_EDP_CNTL1                             (volatile uint32_t *)(0xff63c000 + (0xd2 << 2))
#define     HHI_CSI_PHY_CNTL1                                  (0xff63c000 + (0xd4 << 2))
#define SEC_HHI_CSI_PHY_CNTL1                                  (0xff63c000 + (0xd4 << 2))
#define   P_HHI_CSI_PHY_CNTL1                                  (volatile uint32_t *)(0xff63c000 + (0xd4 << 2))
#define     HHI_CSI_PHY_CNTL2                                  (0xff63c000 + (0xd5 << 2))
#define SEC_HHI_CSI_PHY_CNTL2                                  (0xff63c000 + (0xd5 << 2))
#define   P_HHI_CSI_PHY_CNTL2                                  (volatile uint32_t *)(0xff63c000 + (0xd5 << 2))
#define     HHI_CSI_PHY_CNTL3                                  (0xff63c000 + (0xd6 << 2))
#define SEC_HHI_CSI_PHY_CNTL3                                  (0xff63c000 + (0xd6 << 2))
#define   P_HHI_CSI_PHY_CNTL3                                  (volatile uint32_t *)(0xff63c000 + (0xd6 << 2))
#define     HHI_LVDS_TX_PHY_CNTL0                              (0xff63c000 + (0xde << 2))
#define SEC_HHI_LVDS_TX_PHY_CNTL0                              (0xff63c000 + (0xde << 2))
#define   P_HHI_LVDS_TX_PHY_CNTL0                              (volatile uint32_t *)(0xff63c000 + (0xde << 2))
#define     HHI_LVDS_TX_PHY_CNTL1                              (0xff63c000 + (0xdf << 2))
#define SEC_HHI_LVDS_TX_PHY_CNTL1                              (0xff63c000 + (0xdf << 2))
#define   P_HHI_LVDS_TX_PHY_CNTL1                              (volatile uint32_t *)(0xff63c000 + (0xdf << 2))
#endif


