///////////////////////////////////////////////////////////
//  tooltip.cs
//  Implementation of the Class tooltip
//  Generated by Enterprise Architect
//  Created on:      25-Feb-2024 22:07:05
//  Original author: ØyvindMisje
///////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace OpenBridgeApp.Components.AlertsNotifiations 
{
    public enum ObTooltipVariant
    {
        Neutral = 0,
        Notifiation,
        Caution,
        Warning,
        Alarm
    }

	public class ObTooltip 
    {
		public string Icon;
		public string Label;
		public bool RightArrow;
		public string Text;
		public ObTooltipVariant Variant;

		public ObTooltip()
        {
            Icon = string.Empty;
            Label = string.Empty;
            RightArrow = false;
            Text = string.Empty;
            Variant = ObTooltipVariant.Neutral;
		}

		~ObTooltip()
        {
		}

	}//end tooltip

}//end namespace alerts-notifiations
