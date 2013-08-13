/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"

@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject {
@private
	WebDeviceOrientationInternal* m_internal;
}
-(void)dealloc;
-(id)initWithCanProvideAlpha:(bool)canProvideAlpha alpha:(double)alpha canProvideBeta:(bool)beta beta:(double)beta4 canProvideGamma:(bool)gamma gamma:(double)gamma6;
-(id)initWithCoreDeviceOrientation:(PassRefPtr<WebCore::DeviceOrientation>)coreDeviceOrientation;
@end

