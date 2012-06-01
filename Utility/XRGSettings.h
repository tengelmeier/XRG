/* 
 * XRG (X Resource Graph):  A system resource grapher for Mac OS X.
 * Copyright (C) 2002-2009 Gaucho Software, LLC.
 * You can view the complete license in the LICENSE file in the root
 * of the source tree.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

//
//  XRGSettings.h
//

#import <Cocoa/Cocoa.h>

@interface XRGSettings : NSObject
// Colors
@property (retain,nonatomic) NSColor		*backgroundColor;
@property (retain,nonatomic) NSColor		*graphBGColor;
@property (retain,nonatomic) NSColor		*graphFG1Color;
@property (retain,nonatomic) NSColor		*graphFG2Color;
@property (retain,nonatomic) NSColor		*graphFG3Color;
@property (retain,nonatomic) NSColor		*borderColor;
@property (retain,nonatomic) NSColor		*textColor;

// Transparencies
@property (assign,nonatomic) CGFloat		backgroundTransparency;
@property (assign,nonatomic) CGFloat		graphBGTransparency;
@property (assign,nonatomic) CGFloat		graphFG1Transparency;
@property (assign,nonatomic) CGFloat		graphFG2Transparency;
@property (assign,nonatomic) CGFloat		graphFG3Transparency;
@property (assign,nonatomic) CGFloat		borderTransparency;
@property (assign,nonatomic) CGFloat		textTransparency;
    
// Text attributes
@property (retain,nonatomic) NSFont			*graphFont;
@property (assign) NSInteger				textRectHeight;
@property (retain) NSMutableParagraphStyle	*alignRight;
@property (retain) NSMutableParagraphStyle	*alignLeft;
@property (retain) NSMutableParagraphStyle	*alignCenter;
@property (retain) NSMutableDictionary		*alignRightAttributes;
@property (retain) NSMutableDictionary		*alignLeftAttributes;
@property (retain) NSMutableDictionary		*alignCenterAttributes;

// Other user defined settings
@property (assign) BOOL			fastCPUUsage;
@property (assign) BOOL			separateCPUColor;
@property (assign) BOOL			showCPUTemperature;
@property (assign) NSInteger	cpuTemperatureUnits;
@property (assign) BOOL			antiAliasing;
@property (retain) NSString		*ICAO;
@property (assign) NSInteger	secondaryWeatherGraph;
@property (assign) NSInteger	temperatureUnits;
@property (assign) NSInteger	distanceUnits;
@property (assign) NSInteger	pressureUnits;
@property (assign) BOOL			showMemoryPagingGraph;
@property (assign) BOOL			memoryShowWired;
@property (assign) BOOL			memoryShowActive;
@property (assign) BOOL			memoryShowInactive;
@property (assign) BOOL			memoryShowFree;
@property (assign) BOOL			memoryShowCache;
@property (assign) BOOL			memoryShowPage;
@property (assign) CGFloat		graphRefresh;
@property (assign) BOOL			showLoadAverage;
@property (assign) NSInteger	netMinGraphScale;
@property (retain) NSString		*stockSymbols;
@property (assign) NSInteger	stockGraphTimeFrame;
@property (assign) BOOL			stockShowChange;
@property (assign) BOOL			showDJIA;
@property (assign) NSInteger	windowLevel;
@property (assign) BOOL			stickyWindow;
@property (assign) BOOL			checkForUpdates;
@property (assign) NSInteger	netGraphMode;
@property (assign) NSInteger	diskGraphMode;
@property (assign) BOOL			dropShadow;
@property (assign) BOOL			showTotalBandwidthSinceBoot;
@property (assign) BOOL			showTotalBandwidthSinceLoad;
@property (retain) NSString		*networkInterface;
@property (retain) NSString		*windowTitle;
@property (assign) BOOL			autoExpandGraph;
@property (assign) BOOL			foregroundWhenExpanding;
@property (assign) BOOL			showSummary;
@property (assign) NSInteger	minimizeUpDown;
@property (assign) BOOL			antialiasText;
@property (assign) BOOL			cpuShowAverageUsage;
@property (assign) BOOL			cpuShowUptime;
@property (assign) NSInteger	tempUnits;
@property (assign) NSInteger	tempFG1Location;
@property (assign) NSInteger	tempFG2Location;
@property (assign) NSInteger	tempFG3Location;

- (void) readXTFDictionary:(NSDictionary *)xtfD;

@end