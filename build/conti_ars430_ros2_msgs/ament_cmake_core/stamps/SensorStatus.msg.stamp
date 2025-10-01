std_msgs/Header header

uint64  part_num             # part number
uint64  assembly_part_num    # hardware + bootloader part number
uint64  sw_part_num          # software part number
uint8[] serial_num           # sensor serial number
uint32  bl_ver               # boot loader version
uint32  bl_crc               # boot loader CRC
uint32  sw_ver               # software version
uint32  sw_crc               # software CRC
uint64  utc_time             # ns, some kind of UTC time representation, unsure
uint32  internal_time        # us, some kind of internal time, unsure
float64 cur_damping          # dB, currently configured secondary surface damping
uint8   op_state             # current operational state, init=0, standby=1, reporting=2
uint8   cur_far_center_freq  # currently configured far center frequency
uint8   cur_near_center_freq # currently configured near center frequency
uint8   defective            # permanent/hardware fault, clear=0, fault present=1
uint8   supply_volt_limit    # supply voltage out of range, OK=0, out of range=1
uint8   sensor_off_temp      # sensor temperature out of range, OK=0, out of range=1
uint8   gm_missing           # grandmaster receive timeout, clear=0, GM missing=1
uint8   tx_out_reduced       # radar power output reduced, clear=0, output power reduced=1
float64 max_range_far        # m, max detection range of far scan due to interference
float64 max_range_near       # m, max detection range of near scan due to interference
