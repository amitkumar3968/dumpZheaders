/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, UIImageView, UILabel, NSString, UIDateLabel, CKSummaryLabel;

@interface CKConversationListCell : XXUnknownSuperclass {
@private
	UIDateLabel* _dateLabel;
	CKSummaryLabel* _summaryLabel;
	CKSummaryLabel* _backupSummaryLabel;
	UIImageView* _unreadIndicatorImageView;
	UILabel* _fromLabel;
	UIImageView* _groupImageView;
	BOOL _isPlaceholder;
	NSString* _searchSummaryText;
	NSString* _searchMessageGUID;
	NSDate* _searchMessageDate;
}
@property(copy, nonatomic) NSString* searchSummaryText;	// @synthesize=_searchSummaryText
@property(copy, nonatomic) NSString* searchMessageGUID;	// @synthesize=_searchMessageGUID
@property(retain, nonatomic) NSDate* searchMessageDate;	// @synthesize=_searchMessageDate
+(float)cellHeight;
+(id)identifier;
// declared property setter: -(void)setSearchSummaryText:(id)text;
// declared property getter: -(id)searchSummaryText;
// declared property setter: -(void)setSearchMessageDate:(id)date;
// declared property getter: -(id)searchMessageDate;
// declared property setter: -(void)setSearchMessageGUID:(id)guid;
// declared property getter: -(id)searchMessageGUID;
-(void)layoutSubviews;
-(void)didTransitionToState:(unsigned)state;
-(void)willTransitionToState:(unsigned)state;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_createBackupSummaryLabel;
-(void)updateWithSearchResult:(id)searchResult;
-(void)updateContentsForConversation:(id)conversation;
-(void)dealloc;
-(void)updateFontSize;
-(void)prepareForReuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
