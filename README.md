
<h1>wm8731 Device</h1>
<ul>
  <li> Generated with <a href="https://github.com/uprev-mrt/mrtutils/wiki/mrt-device">MrT Device Utility</a> </li>
  <li> Bus:  I2C, SPI</li>
  <li> RegMap: <a href="Regmap.html">Register Map</a>
  <li>Datasheet: <a href="https://statics.cirrus.com/pubs/proDatasheet/WM8731_v4.9.pdf">https://statics.cirrus.c...</a> </li>
  <li> DigiKey: <a href="https://www.digikey.com/products/en?KeyWords=WM8731CSEFL-ND">WM8731CSEFL-ND</a></li>
  <li> I2C Address: 0x34</li>
</ul>
<hr/>
<h2>Description: </h2>
<p>Aduio codec</p>

<!--*user-block-description-start*-->

> Note: Device does not use standard I2C. See datasheet for addressing

> Note: Setting Output power down flag (OUTPD) seems to shut down line inputs as well

<!--*user-block-description-end*-->
<br/>


<hr class="section">
<h2 class="right"> Register Map</h2>
<hr class="thick">

<table class="fields">
    <tr>
        <th>Name</th>
        <th>Address</th>
        <th>Type</th>
        <th>Access</th>
        <th>Default</th>
        <th>Description</th>
    </tr>
    <tr>
        <td><a href="#register_left_in_detail">LEFT_IN</a></td>
        <td>0x00</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0097</td>
        <td>Left line in control</td>
    </tr>
    <tr>
        <td><a href="#register_right_in_detail">RIGHT_IN</a></td>
        <td>0x01</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0097</td>
        <td>Right line in control</td>
    </tr>
    <tr>
        <td><a href="#register_left_out_detail">LEFT_OUT</a></td>
        <td>0x02</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0079</td>
        <td>Left Headphone Out control</td>
    </tr>
    <tr>
        <td><a href="#register_right_out_detail">RIGHT_OUT</a></td>
        <td>0x03</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0079</td>
        <td>Right Headphone Out control</td>
    </tr>
    <tr>
        <td><a href="#register_an_path_detail">AN_PATH</a></td>
        <td>0x04</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x000A</td>
        <td>analog audio path control</td>
    </tr>
    <tr>
        <td><a href="#register_dig_path_detail">DIG_PATH</a></td>
        <td>0x05</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0008</td>
        <td>Digital audio path control</td>
    </tr>
    <tr>
        <td><a href="#register_power_dwn_detail">POWER_DWN</a></td>
        <td>0x06</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x009F</td>
        <td>Power Down control</td>
    </tr>
    <tr>
        <td><a href="#register_dig_iface_detail">DIG_IFACE</a></td>
        <td>0x07</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x009F</td>
        <td>Digital audio interface format</td>
    </tr>
    <tr>
        <td><a href="#register_sample_detail">SAMPLE</a></td>
        <td>0x08</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0000</td>
        <td>Sampling control</td>
    </tr>
    <tr>
        <td><a href="#register_active_detail">ACTIVE</a></td>
        <td>0x09</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0000</td>
        <td>Active Control</td>
    </tr>
    <tr>
        <td><a href="#register_reset_detail">RESET</a></td>
        <td>0x0F</td>
        <td>uint16</td>
        <td>W</td>
        <td>0x0FFF</td>
        <td>Reset control</td>
    </tr>

</table>



<hr class="section">
<h2 class="right"> Registers</h2>
<hr class="thick">



<div id="register_left_in_detail" class="packet">
<h2>LEFT_IN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x00]</b></li>
    <li class="note">  Default: <b>[0x0097]</b></li>
</ul>

<p>Left line in control</p>
<!--*user-block-left_in-start*-->
<!--*user-block-left_in-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="7"></td>
<td class="field" colspan="1">LRINBOTH</td>
<td class="field" colspan="1">MUTE</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="5">VOLUME</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>MUTE:</b> Mutes Left input<br>
<b>LRINBOTH:</b> Left to Right Channel Line Input Volume and Mute Data Load Control<br>

<h2> Fields:</h2>

<b>VOLUME:</b> Volume control for Left input in 1.5dB steps range -34.5dB -> +12dB
<table>
<tr><td> MIN </td><td> b00000 </td><td>  -34.5dB</td></tr>
<tr><td> 0dB </td><td> b10101 </td><td>  0db Gain</td></tr>
<tr><td> MAX </td><td> b11111 </td><td>  +12dB</td></tr>
<tr><td> STEP </td><td> b00001 </td><td>  1.5dB Step</td></tr>
</table>



<div id="register_right_in_detail" class="packet">
<h2>RIGHT_IN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x01]</b></li>
    <li class="note">  Default: <b>[0x0097]</b></li>
</ul>

<p>Right line in control</p>
<!--*user-block-right_in-start*-->
<!--*user-block-right_in-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="7"></td>
<td class="field" colspan="1">LRINBOTH</td>
<td class="field" colspan="1">MUTE</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="5">VOLUME</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>MUTE:</b> Mutes Right input<br>
<b>LRINBOTH:</b> Left to Right Channel Line Input Volume and Mute Data Load Control<br>

<h2> Fields:</h2>

<b>VOLUME:</b> Volume control for right input in 1.5dB steps range -34.5dB -> +12dB
<table>
<tr><td> MIN </td><td> b00000 </td><td>  minimum -34.5dB</td></tr>
<tr><td> 0dB </td><td> b10101 </td><td>  0db Gain</td></tr>
<tr><td> MAX </td><td> b11111 </td><td>  maximum +12dB</td></tr>
<tr><td> STEP </td><td> b00001 </td><td>  1.5dB Step</td></tr>
</table>



<div id="register_left_out_detail" class="packet">
<h2>LEFT_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x02]</b></li>
    <li class="note">  Default: <b>[0x0079]</b></li>
</ul>

<p>Left Headphone Out control</p>
<!--*user-block-left_out-start*-->
<!--*user-block-left_out-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">LEFT_OUT</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>LEFT_OUT:</b> Left Headphone Out control


<div id="register_right_out_detail" class="packet">
<h2>RIGHT_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x03]</b></li>
    <li class="note">  Default: <b>[0x0079]</b></li>
</ul>

<p>Right Headphone Out control</p>
<!--*user-block-right_out-start*-->
<!--*user-block-right_out-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">RIGHT_OUT</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>RIGHT_OUT:</b> Right Headphone Out control


<div id="register_an_path_detail" class="packet">
<h2>AN_PATH </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x04]</b></li>
    <li class="note">  Default: <b>[0x000A]</b></li>
</ul>

<p>analog audio path control</p>
<!--*user-block-an_path-start*-->
<!--*user-block-an_path-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>
<td class="field" colspan="2">SIDEATT</td>
<td class="field" colspan="1">SIDETONE</td>
<td class="field" colspan="1">DACSEL</td>
<td class="field" colspan="1">BYPASS</td>
<td class="field" colspan="1">INSEL</td>
<td class="field" colspan="1">MUTEMIC</td>
<td class="field" colspan="1">MICBOOST</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>MICBOOST:</b> Microphone Input Level Boost<br>
<b>MUTEMIC:</b> Mute Mic input to ADC<br>
<b>INSEL:</b> Selects input between Mic and Line-in<br>
<b>BYPASS:</b> Combines Line-in signal to Output<br>
<b>DACSEL:</b> DAC Select<br>
<b>SIDETONE:</b> Combines Mic signal to Output<br>

<h2> Fields:</h2>

<b>SIDEATT:</b> Side Tone attenuation
<table>
<tr><td> 6dB </td><td> b00 </td><td>  6dB of attenuation</td></tr>
<tr><td> 9dB </td><td> b01 </td><td>  9dB of attenuation</td></tr>
<tr><td> 12dB </td><td> b10 </td><td>  12dB of attenuation</td></tr>
<tr><td> 15dB </td><td> b11 </td><td>  15dB of attenuation</td></tr>
</table>



<div id="register_dig_path_detail" class="packet">
<h2>DIG_PATH </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x05]</b></li>
    <li class="note">  Default: <b>[0x0008]</b></li>
</ul>

<p>Digital audio path control</p>
<!--*user-block-dig_path-start*-->
<!--*user-block-dig_path-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="11"></td>
<td class="field" colspan="1">HPOR</td>
<td class="field" colspan="1">DACMU</td>
<td class="field" colspan="2">DEEMP</td>
<td class="field" colspan="1">ADCHPD</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>ADCHPD:</b> ADC High Pass Filter<br>
<b>DACMU:</b> DAC Soft Mute<br>
<b>HPOR:</b> Store dc offset when High Pass Filter disabled<br>

<h2> Fields:</h2>

<b>DEEMP:</b> De-emphasis Control
<table>
<tr><td> DIS </td><td> b00 </td><td>  Disable</td></tr>
<tr><td> 32kHz </td><td> b01 </td><td>  32 kHz</td></tr>
<tr><td> 44_1kHz </td><td> b10 </td><td>  44.1 kHz</td></tr>
<tr><td> 48kHz </td><td> b11 </td><td>  48 kHz</td></tr>
</table>



<div id="register_power_dwn_detail" class="packet">
<h2>POWER_DWN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x06]</b></li>
    <li class="note">  Default: <b>[0x009F]</b></li>
</ul>

<p>Power Down control</p>
<!--*user-block-power_dwn-start*-->
<!--*user-block-power_dwn-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>
<td class="field" colspan="1">POWEROFF</td>
<td class="field" colspan="1">CLKOUTPD</td>
<td class="field" colspan="1">OSCPD</td>
<td class="field" colspan="1">OUTPD</td>
<td class="field" colspan="1">DACPD</td>
<td class="field" colspan="1">ADCPD</td>
<td class="field" colspan="1">MICPD</td>
<td class="field" colspan="1">LINEINPD</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>LINEINPD:</b> Line Input Power Down<br>
<b>MICPD:</b> Microphone Input an Bias PowerDown<br>
<b>ADCPD:</b> ADC Power Dow<br>
<b>DACPD:</b> DAC Power Down<br>
<b>OUTPD:</b> Powers down ALL outputs including digital<br>
<b>OSCPD:</b> Oscillator Power Down<br>
<b>CLKOUTPD:</b> CLKOUT power down<br>
<b>POWEROFF:</b> POWEROFF mode<br>


<div id="register_dig_iface_detail" class="packet">
<h2>DIG_IFACE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x07]</b></li>
    <li class="note">  Default: <b>[0x009F]</b></li>
</ul>

<p>Digital audio interface format</p>
<!--*user-block-dig_iface-start*-->
<!--*user-block-dig_iface-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>
<td class="field" colspan="1">BLCKINV</td>
<td class="field" colspan="1">MASTER_MODE</td>
<td class="field" colspan="1">LRSWAP</td>
<td class="field" colspan="1">LRP</td>
<td class="field" colspan="2">IWL</td>
<td class="field" colspan="2">FORMAT</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>BLCKINV:</b> Inverts the bit clock<br>
<b>MASTER_MODE:</b> Enables Master mode<br>
<b>LRSWAP:</b> Swaps LR clock polarity<br>
<b>LRP:</b> DACLRC phase control (in left, right or I2S modes)<br>

<h2> Fields:</h2>

<b>IWL:</b> Word Length. Audio data size
<table>
<tr><td> 32BIT </td><td> b11 </td><td>  32 bit sample size</td></tr>
<tr><td> 24BIT </td><td> b10 </td><td>  24 bit sample size</td></tr>
<tr><td> 20BIT </td><td> b01 </td><td>  20 bit sample size</td></tr>
<tr><td> 16BIT </td><td> b00 </td><td>  16 bit sample size</td></tr>
</table>



<b>FORMAT:</b> Selects digital audio format
<table>
<tr><td> RIGHT_JUST </td><td> b00 </td><td>  MSB-First right justified</td></tr>
<tr><td> LEFT_JUST </td><td> b01 </td><td>  MSB-first left justified</td></tr>
<tr><td> I2S </td><td> b10 </td><td>  I2S format. MSB-First left -1 justified</td></tr>
<tr><td> DSP </td><td> b11 </td><td>  DSP Mode. frame sync + 2 data packed words</td></tr>
</table>



<div id="register_sample_detail" class="packet">
<h2>SAMPLE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x08]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Sampling control</p>
<!--*user-block-sample-start*-->
<!--*user-block-sample-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">SAMPLE</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>SAMPLE:</b> Sampling control


<div id="register_active_detail" class="packet">
<h2>ACTIVE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x09]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Active Control</p>
<!--*user-block-active-start*-->
<!--*user-block-active-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="15"></td>
<td class="field" colspan="1">Enable</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>Enable:</b> Enables Digital Audio interface<br>


<div id="register_reset_detail" class="packet">
<h2>RESET </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0F]</b></li>
    <li class="note">  Default: <b>[0x0FFF]</b></li>
</ul>

<p>Reset control</p>
<!--*user-block-reset-start*-->
<!--*user-block-reset-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>
<td class="field" colspan="8">RESET</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>RESET:</b> Setting to 0 resets the device

