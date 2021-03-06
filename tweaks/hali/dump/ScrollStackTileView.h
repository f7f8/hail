//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StackTileView.h"

@class ScrollStackTile, TileCollectionView;

@interface ScrollStackTileView : StackTileView
{
    TileCollectionView *_collectionView;	// 8 = 0x8
    ScrollStackTile *_weakStack;	// 16 = 0x10
}

@property(nonatomic) __weak ScrollStackTile *weakStack; // @synthesize weakStack=_weakStack;
@property(retain, nonatomic) TileCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000101a48fb4
- (void)prepareForReuse;	// IMP=0x0000000101a48f24
- (void)renderWithTile:(id)arg1;	// IMP=0x0000000101a48db0
- (void)layoutSubviews;	// IMP=0x0000000101a48d28
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101a48a58

@end

