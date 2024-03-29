/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import "NSObject.h"


@protocol CertInfoTrustDescription <NSObject>
-(id)certificateExpirationDateAtIndex:(unsigned)index;
-(id)certificateIssuerSummaryAtIndex:(unsigned)index;
-(id)certificateSubjectSummaryAtIndex:(unsigned)index;
-(id)certificatePropertiesAtIndex:(unsigned)index;
-(unsigned)certificateCount;
-(id)summaryDescriptionItems;
-(BOOL)isTrusted;
-(id)summarySubtitle;
-(id)summaryTitle;
@end

