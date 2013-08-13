/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVErrorItem, CoreDAVLeafItem;

@interface CoreDAVPropStatItem : CoreDAVItem {
	CoreDAVLeafItem* _status;
	CoreDAVItem* _prop;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;
}
@property(retain) CoreDAVLeafItem* responseDescription;	// @synthesize=_responseDescription
@property(retain, nonatomic) CoreDAVErrorItem* errorItem;	// @synthesize=_errorItem
@property(retain) CoreDAVItem* prop;	// @synthesize=_prop
@property(retain) CoreDAVLeafItem* status;	// @synthesize=_status
+(id)copyParseRules;
// declared property setter: -(void)setResponseDescription:(id)description;
// declared property getter: -(id)responseDescription;
// declared property getter: -(id)errorItem;
// declared property setter: -(void)setProp:(id)prop;
// declared property getter: -(id)prop;
// declared property setter: -(void)setStatus:(id)status;
// declared property getter: -(id)status;
// declared property setter: -(void)setErrorItem:(id)item;
-(id)description;
-(void)dealloc;
-(id)init;
@end

