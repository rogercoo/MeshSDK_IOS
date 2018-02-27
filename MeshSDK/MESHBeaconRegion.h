//
//  MESHBeaconRegion.h
//  MeshSDK
//
//  Version : 1.0.0
//  Created by MTC on 20/02/18.
//  Copyright (c) 2018 MTC Network. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>



/**
 
 MESHBeaconRegion定义了一类区域，是基于蓝牙设备,而不是一个地理位置。beacon区域寻找设备的识别信息匹配您提供的信息，当一个设备范围,该区域触发一个适当的通知
 
 您可以监视信标区域在两个方面。设备进入或退出时接收通知附近的beacon,使用startMonitoringForRegion:你的位置管理器对象的方法。当beacon在范围内,你也可以调用startRangingBeaconsInRegion:方法开始时接收通知的相对的距离变化.
 
 MESHBeaconRegion 扩展了基本的CLBeaconRegion类。
 
 */
@interface MESHBeaconRegion : CLBeaconRegion


@end
