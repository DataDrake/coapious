# 
# Synthesis run script generated by Vivado
# 

namespace eval rt {
    variable rc
}
set rt::rc [catch {
  uplevel #0 {
    set ::env(BUILTIN_SYNTH) true
    source $::env(HRT_TCL_PATH)/rtSynthPrep.tcl
    rt::HARTNDb_resetJobStats
    rt::HARTNDb_startJobStats
    set rt::cmdEcho 0
    rt::set_parameter writeXmsg true
    set ::env(RT_TMP) "./.Xil/Vivado-21028-btmeme-x230/realtime/tmp"
    if { [ info exists ::env(RT_TMP) ] } {
      file delete -force $::env(RT_TMP)
      file mkdir $::env(RT_TMP)
    }

    rt::delete_design

    set rt::partid xc7a15tcpg236-3

    source $::env(SYNTH_COMMON)/common_vhdl.tcl
    set rt::defaultWorkLibName xil_defaultlib

    set rt::useElabCache false
    if {$rt::useElabCache == false} {
      rt::read_vhdl -lib xil_defaultlib {
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/rx_datapath.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/tx_datapath.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/rx_control.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/tx_control.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/uart_tx.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/usart_rx.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/strober.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/loopback.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/uart.vhd
      /home/bryan/Documents/Classes/Reconfigurable/uart_test/uart_test/uart_test.srcs/sources_1/imports/uart_test/top_level.vhd
    }
      rt::filesetChecksum
    }
    rt::set_parameter usePostFindUniquification false
    set rt::top top_level
    set rt::reportTiming false
    rt::set_parameter elaborateOnly true
    rt::set_parameter elaborateRtl true
    rt::set_parameter eliminateRedundantBitOperator false
    rt::set_parameter writeBlackboxInterface true
    rt::set_parameter merge_flipflops true
    rt::set_parameter srlDepthThreshold 3
    rt::set_parameter rstSrlDepthThreshold 4
    rt::set_parameter webTalkPath {}
    rt::set_parameter enableSplitFlowPath "./.Xil/Vivado-21028-btmeme-x230/"
    if {$rt::useElabCache == false} {
      rt::run_rtlelab -module $rt::top
    }

    set rt::flowresult [ source $::env(SYNTH_COMMON)/flow.tcl ]
    rt::HARTNDb_stopJobStats
    if { $rt::flowresult == 1 } { return -code error }

    if { [ info exists ::env(RT_TMP) ] } {
      file delete -force $::env(RT_TMP)
    }


    source $::env(HRT_TCL_PATH)/rtSynthCleanup.tcl
  } ; #end uplevel
} rt::result]

if { $rt::rc } {
  $rt::db resetHdlParse
  source $::env(HRT_TCL_PATH)/rtSynthCleanup.tcl
  return -code "error" $rt::result
}
