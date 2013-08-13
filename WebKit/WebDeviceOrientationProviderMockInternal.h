/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject {
@private
	OwnPtr<WebCore::DeviceOrientationClientMock> m_core;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)lastOrientation;
-(void)stopUpdating;
-(void)startUpdating;
-(void)setController:(DeviceOrientationController*)controller;
-(void)setOrientation:(id)orientation;
-(id)init;
@end
