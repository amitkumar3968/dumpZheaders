/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBDataProviderFactory.h"


@protocol BBPushDataProviderFactory <BBDataProviderFactory>
-(void)setPushSettings:(unsigned)settings alertType:(unsigned)type forDataProvider:(id)dataProvider;
-(unsigned)pushSettingsForDataProvider:(id)dataProvider;
@end

