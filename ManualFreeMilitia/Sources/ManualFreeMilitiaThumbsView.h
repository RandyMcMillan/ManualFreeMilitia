//
//	ManualFreeMilitiaThumbsView.h
//	ManualFreeMilitia v2.7.1
//
//	Created by Julius Oklamcak on 2011-09-01.
//	Copyright © 2011-2013 Julius Oklamcak. All rights reserved.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights to
//	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//	of the Software, and to permit persons to whom the Software is furnished to
//	do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in all
//	copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

#import "ManualFreeMilitiaThumbView.h"

@class ManualFreeMilitiaThumbsView;

@protocol ManualFreeMilitiaThumbsViewDelegate <NSObject, UIScrollViewDelegate>

@required // Delegate protocols

- (NSUInteger)numberOfThumbsInThumbsView:(ManualFreeMilitiaThumbsView *)thumbsView;

- (id)thumbsView:(ManualFreeMilitiaThumbsView *)thumbsView thumbCellWithFrame:(CGRect)frame;

- (void)thumbsView:(ManualFreeMilitiaThumbsView *)thumbsView updateThumbCell:(id)thumbCell forIndex:(NSInteger)index;

- (void)thumbsView:(ManualFreeMilitiaThumbsView *)thumbsView didSelectThumbWithIndex:(NSInteger)index;

@optional // Delegate protocols

- (void)thumbsView:(ManualFreeMilitiaThumbsView *)thumbsView refreshThumbCell:(id)thumbCell forIndex:(NSInteger)index;

- (void)thumbsView:(ManualFreeMilitiaThumbsView *)thumbsView didPressThumbWithIndex:(NSInteger)index;

@end

@interface ManualFreeMilitiaThumbsView : UIScrollView

@property (nonatomic, weak, readwrite) id <ManualFreeMilitiaThumbsViewDelegate> delegate;

- (void)setThumbSize:(CGSize)thumbSize;

- (void)reloadThumbsCenterOnIndex:(NSInteger)index;

- (void)reloadThumbsContentOffset:(CGPoint)newContentOffset;

- (void)refreshThumbWithIndex:(NSInteger)index;

- (void)refreshVisibleThumbs;

- (CGPoint)insetContentOffset;

@end
